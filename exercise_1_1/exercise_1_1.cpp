//Do not edit the next 4 lines
#include <iostream>
#include <vector>

int main() {
	std::cout << "Use the wasd keys and enter to input a direction, or the E key to stop" << std::endl;

    // Write your code for step 1 here
    std::vector<float> wheel_speeds(4);

    // Write your code for step 2 here
    wheel_speeds[0] = 0;
    wheel_speeds[1] = 0;
    wheel_speeds[2] = 0;
    wheel_speeds[3] = 0;
   
    // Do not edit the next 5 lines 
    bool keep_going = true;
    char direction;

    while (keep_going) {
        std::cin >> direction; //At the begining of every iteration look for an input from the user
        // Write rest of code here (within while loop)
        if ('w' == direction) {
            for (int i = 0; i <= 3; i++) {
                wheel_speeds[i] = 1;
            }
        }
        else if ('a' == direction) {
            wheel_speeds[0] = 0.5;
            wheel_speeds[2] = 0.5;
            wheel_speeds[1] = 1;
            wheel_speeds[3] = 1;
        }
        else if ('s' == direction) {
            for (int i = 0; i <= 3; i++) {
                wheel_speeds[i] = -1;
            }
        }
        else if ('d' == direction) {
            wheel_speeds[1] = 0.5;
            wheel_speeds[3] = 0.5;
            wheel_speeds[0] = 1;
            wheel_speeds[2] = 1;
        }
        else if ('e' == direction) {
            for (int i = 0; i <= 3; i++) {
                wheel_speeds[i] = 0;
            }
            std::cout << "Shutting down" << std::endl;
            keep_going = false;
        }
        else {
            std::cout << "Sorry, I didn't get that. Try again." << std::endl;
        }

        for (int i = 0; i <= 3; i++) {
                std::cout << "wheel at index " << i << " has speed: " << wheel_speeds[i] << std::endl;            }
        //
    }

}

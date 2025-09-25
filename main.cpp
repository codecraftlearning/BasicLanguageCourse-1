#include <iostream>

int main(int numberOfArgs, char* argsValues[]) {
    if (numberOfArgs > 1) {
        int sum = 0;
        for (int i = 1; i<numberOfArgs; i++) {
            sum += std::atoi(argsValues[i]);
        }

        std::cout << sum;
    }
}
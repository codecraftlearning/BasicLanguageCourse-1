#include <iostream>

int main() {
    // for (int i = 1; i <= 10; i++) {
    //     std::cout << i << " " << "my name" << "\n";
    // }


    // int i = 1;
    // while (i <= 10) {
    //     std::cout << i++ << " " << "my name" << "\n";
    // }

    // int i = 1;
    // do {
    //     std::cout << i++ << " " << "my name" << "\n";
    // } while (i <= 10);



    int i = 0;
    for (std::cout << "init\n"; std::cout << "condition\n", i<=5; std::cout << "update\n", i++) {
        std::cout << "body\n";
    }

    //init
    //condition
    //body
    //update
    //condition
    //body
}
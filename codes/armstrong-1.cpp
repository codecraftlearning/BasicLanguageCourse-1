#include <iostream>
using namespace std;

bool isArmStrong(int num) {
    int temp = num;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }

    return sum == num;
}

int main() {

    int range;
    cout << "Enter the range: ";
    cin >> range;

    for (int i = 0; i<=range; i++) {
        if (isArmStrong(i)) {
            cout<< i <<", ";
        }
    }
}


//    153 = 0 + 1^3 + 5^3 + 3^3
/*
    m = 153
    
    153 % 10 = 3 => 3
    153 / 10 = 15
    15 % 10 = 5 => 5
    15 / 10 = 1
    1 % 10 = 1 => 1
    1 / 10 = 0
*/
#include <iostream>
using namespace std;


int main() {

    int range;
    cout << "Enter the range: ";
    cin >> range;

    int a = 0;
    int b = 1;

    while (a <= range) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}


//21 => 0 1 1 2 3 5 8 13 21
//  a= 0 b = 1 => 0  
/*
    print a
    temp = a + b;
    a = b;
    b = temp;
*/


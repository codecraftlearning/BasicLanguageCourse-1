#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
        cout << "Multiple of both 3 and 5";
    else if (num % 3 == 0)
        cout << "Multiple of 3";
    else if (num % 5 == 0)
        cout << "Multiple of 5";
    else
        cout << "Not a multiple of 3 or 5";

    return 0;
}

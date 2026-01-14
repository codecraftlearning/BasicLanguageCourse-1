// Reverse the digits of a number without string.
#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0;

    cout << "Enter the number:";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << "Reversed number:" << reverse;
}

// 1. Count the frequency of digits in a number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int *arr = new int[n];

    while (n > 0)
    {
        int d = n % 10;
        arr[d]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << ":" << arr[i] << endl;
    }


}

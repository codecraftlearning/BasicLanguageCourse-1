// no. of elements user defined, avoid negative and floating numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the array:";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp < 0)
        {
            cout << "Invalid input" << endl;
            i--;
        }
        else
        {
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int countArr[201] = {0};
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    }
    for (int i = 0; i < 201; i++)
    {
        if (countArr[i] > 0)
        {
            cout << "Frequency of " << i << " is " << countArr[i] << endl;
        }
    }
    delete countArr;
    delete arr;
}

/*
1. Count the frequency of digits in a number.
2. In a given array with any number including zeroes, 
move all the zeroes to the end without changing the order. Don't use extra space(single arr).
*/
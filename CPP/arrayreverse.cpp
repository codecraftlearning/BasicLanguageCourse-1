#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) //n=6
{
    for (int i = 0; i < n/2; i++) //i=0, i=1, i=2
    {
        int temp = arr[i]; // 1, 2, 3
        arr[i] = arr[n - i - 1]; //6, 5, 4
        arr[n - i - 1] = temp; //1, 2, 3
    }
} // 1 2 3 4 5 6
//6 2 3 4 5 1
//6 5 3 4 2 1
//6 5 4 3 2 1

int main()
{
    int n;
    cout << "Enter the number of elements in the array:";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete arr;
}
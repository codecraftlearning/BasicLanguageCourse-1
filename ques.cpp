/* Write a program to accept the elements of an array in any order,
while inserting, you have to sort the array.
 For example- entered 3, then arr=[3]. then entered 1, arr= [1,3].
After the entry is completed(-1 or any negative element), then ask for a number to search and
print the position(index+1) if found, else not found. Keep searching until any negative value comes.
 Search algorithm should be binary search.
*/
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size = 1000;
    int *arr = new int[size];
    int n = 0;

    cout << "Enter elements (negative to stop): "
    int x;

    while (true)
    {
        cin >> x;

        if (x < 0)
        {
            break;
        }

        arr[n] = x;
        n++;

        insertionSort(arr, n);
    }

    cout << "Array after sorted insertions: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Enter value to search:";

    int key;
    while (true)
    {
        cin >> key;
        if(key<0)
        {
            break;
        }
        int val = binarySearch(arr, n, key);
        if (val != -1)
        {
            cout << "Value found:";
        }
        else
        {
            cout << "Value not found:";
        }

    }
}
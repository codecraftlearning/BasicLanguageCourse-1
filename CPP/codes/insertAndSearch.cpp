/*
Homework: 

1. Count frequency of each element (without using maps).

2. Check if an array is sorted.

3. Find the second largest element without sorting.

*/

#include <iostream>
using namespace std;

int binary(int arr[], int n, int key) // sorted array
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; 
} 

int main()
{

    int arr[100];
    int size = 0;

    int n = 0;
    while (n >= 0)
    {
        cout << "Enter element number " << size + 1 << ": ";
        cin >> n;
        if (n >= 0)
        {
            int i = size - 1;
            while (arr[i] > n)
            {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = n;
            size++;
        }
        else
        {
            size--;
        }
    }

    cout << "Array entry completed, you can search now!!" << endl;
    int serachNum = 0;
    while (serachNum >= 0)
    {
        cout << "Which element you want to search: ";
        cin >> serachNum;
        
        if (serachNum < 0) {
            cout << "Thankyou for using this app!!.";
            break;
        }

        int index = binary(arr, size+1, serachNum);
        if (index == -1) {
            cout << "Element Not Present" << endl;
        } else {
            cout << "Element found at position: "<<index+1 <<endl;
        }
    }
}


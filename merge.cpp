#include <iostream>
using namespace std;

void printArr(int arr[], int size);

void merge(int arr[], int left, int right);

void mergesort(int arr[], int left, int mid, int right);

int main()
{
    int size = 10;
    int arr[size] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    merge(arr, 0, size - 1);

    printArr(arr, size);

    return 0;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        merge(arr, left, mid);
        merge(arr, mid + 1, right);
        mergesort(arr, left, mid, right);
    }
}

void mergesort(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l[n1], r[n2];

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++)
    {
        r[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[k++] = l[i++];
        }
        else
        {
            arr[k++] = r[j++];
        }

    }
    
        while (i < n1)
        {
            arr[k++] = l[i++];
        }

        while (j < n2)
        {
            arr[k++] = r[j++];
        }
    
}
#include <iostream>
using namespace std;

void printArr(int arr[], int size);

void insertionSort(int arr[], int size);

int main()
{
    int size = 10;
    int arr[size] = {4, 6, 8, 3, 2, 1, 9, 0, 11, 14};
    insertionSort(arr, size);
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

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
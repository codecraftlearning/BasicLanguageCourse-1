#include <iostream>
using namespace std;

void printArr(int arr[], int size);

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

int main()
{
    int size = 10;
    int arr[size] = {4, 6, 8, 3, 2, 1, 9, 0, 11, 14};
    quickSort(arr,0, size-1);
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
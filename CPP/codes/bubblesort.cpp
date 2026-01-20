#include <iostream>
using namespace std;

void printArr(int arr[], int size);

void bubbleSort(int arr[], int size);

int main()
{
    int size = 10; //0 1 2 3 4 5 6...
    int arr[size] = {4, 6, 8, 3, 2, 1, 9, 0, 11, 14};
    bubbleSort(arr, size);
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; //j and i swap
            }
        }
    }
}
/*
*/
#include <iostream>
using namespace std;

void printArr(int arr[], int size);

void selectSort(int arr[], int size);

int main()
{
    int size = 10;
    int arr[size] = {4, 6, 8, 3, 2, 1, 9, 0, 11, 14};
    selectSort(arr, size);
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
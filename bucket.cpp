#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size);

void bucketSort(int arr[], int size);

int main()
{
    int size = 10;
    int arr[size] = {4, 6, 8, 3, 2, 1, 9, 0, 11, 14};
    bucketSort(arr, size);
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bucketSort(int arr[], int size)
{
    int bucketsize = 5;
    if (size <= 0)
    {
        return;
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int bucketcount = (max - min) / bucketsize + 1;
    vector<vector<int>> buckets(bucketcount);
    for (int i = 0; i < size; i++)
    {
        int index = (arr[i] - min) / bucketsize;
        buckets[index].push_back(arr[i]);
    }
    int index = 0;

    for (int i = 0; i < bucketcount; i++)
    {
        sort(buckets[i].begin(), buckets[i].end());
        for (int num : buckets[i])
        {
            arr[index++] = num;
        }
    }
}

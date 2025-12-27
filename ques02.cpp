#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array";

    cin >> n;

    int *arr = new int[n];

    cout << "Enter the array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sorted = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is NOT sorted";
    }


    int largest= arr[0];
    int secondlargest= -1;

    if(arr[1]>arr[0]){
        largest= arr[1];
        secondlargest= arr[0];
    }
    else if(arr[1]<arr[0]){
         largest= arr[0];
        secondlargest= arr[1];
    }
    else{
        secondlargest= arr[1];
    }

    for(int i=2; i<n; i++){
        if(arr[i]>largest){
            secondlargest= largest;
            largest= arr[i];
        }

        else if(arr[i]>secondlargest && arr[i]!= largest){
                secondlargest= arr[i];
            }
        
    }
    if(largest== secondlargest){
        cout<<"Second largest is the same as largest:"<<secondlargest;
    }
    else{
        cout<<"Second largest is:"<<secondlargest;
    }

    
    /*
    arr[]= {}
    count= 0;
    i=0;i<n
    j= i+1 to n
     
   count the frequency of each element in an array
   positive arr, less than 200 size, not be a floating number, 

    */

}

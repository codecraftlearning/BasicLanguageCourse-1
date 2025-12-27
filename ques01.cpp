// In an array, find the maximum element and minimum element, 
//not entered in a sorted format and not to be sorted. Best case= n. 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in the array:";
    cin>>n;
    int* arr= new int[n];

    cout<<"Enter the elements";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int minval= arr[0];
    int maxval= arr[0];
    for(int i=1; i<n; i++){
        
        if(arr[i]< minval){
            minval= arr[i];
        }
        if(arr[i]> maxval){
            maxval= arr[i];
        }
    }
    cout<<"Max value:"<< maxval;
    cout<<"Min value:"<<minval;
}

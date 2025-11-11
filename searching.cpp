#include <iostream>
using namespace std;

int linear(int arr[], int n, int key) //unsorted array
{
    for(int i=0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1; //not found
} 
// time complexity (worst case scenario) = n
// (best scenario) = 1
int binary(int arr[], int n, int key) //sorted array
{
    int low = 0; 
    int high = n-1;
    while(low<=high){
        int mid= (low + high)/2;
        if(arr[mid] == key){
            return mid;
            else if(arr[mid]< key){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

    }
    return -1; //not found
}   //time complexity= n/2 

int main(){
    int n= 6;
    int arr[n]= {1,2,3,4,5,6};
    linear(arr[n], n, 6);
    binary(arr[n], n, 6);

    return 0;
    
}

/*  
[1] 0, 1, 2, 3
 0, 1, 2, 3, 4, 5   =n   =6 i<n
[1, 2, 3, 4, 5, 6]   10
         low    high
1, 2, 3
 low   high = mid -1     [4, 5, 6]
         low    high
              6

*/

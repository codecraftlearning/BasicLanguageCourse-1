// Write a program to rotate an array. {1, 3, 6, 2, 4}. after rotating=> {4, 1, 3, 6, 2}. again=> {2, 4, 1, 3, 6}.
#include <iostream>
using namespace std;

void rotateOnce(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
// 4 2 6 3 1
// 1 2 3 4 5
// 4 5 1 2 3
//1 2 3 4 5, n=5; k=3;
//temp[k]= 1 2 3, arr= 1 2 3 4 5;
//i=3; 4 5 3 4 5; arr[n-k]
void leftRotateByK(int arr[], int n, int k){
    k= k%n;
    int temp[k];

    for(int i=0; i<k;i++){
        temp[i]= arr[i];
    } 
    for(int i= k; i<n; i++)
    {
        arr[i-k]= arr[i];
    }
    for( int i= 0; i<k;i++){
        arr[i+ n-k]= temp[i];
    }

}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
   int k;
   cin>>k;
    leftRotateByK(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    

}
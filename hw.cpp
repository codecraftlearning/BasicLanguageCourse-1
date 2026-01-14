// Write a program to check if a number is even and odd not using MOD.
// Write a program to find the missing element in a sequential array.{1,2,3,5,6}=> missing is 4.only one missing.
//constraint= array may or may not be in a sequence, may or may not start with one.

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {6, 4, 1, 3, 2};
    int max, min;
    int sum2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
        sum2 += arr[i];
    }
    //n/2 * 2a+ (n-1)d 
    int sum = ((n+1)/2) *((2*min) + n);
    cout << sum;
    int missing = sum - sum2;

    cout << "Missing element is" << missing;
}


//Write a program to find the unique element in an array. constraint is there will be exactly one unique element.

#include <iostream>
using namespace std;

int main()
{
    int n= 6;
    int arr[n]= {1,1,1,3,2,3};
    //1^1^3^2^3
    int u= arr[0];
    for(int i=1; i<n; i++){
        u ^= arr[i];
    }
    cout<<"Unique Element is"<<u<<endl;
}
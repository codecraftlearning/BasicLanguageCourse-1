//Write a program to find the second maximum number in an array

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[n]= {-1,-2,-3,-4,-5};
    
    int max, secondMax;

    if(arr[0]>arr[1]){
    max= arr[0];
    secondMax= arr[1];
    }
    else{
        max= arr[1];
        secondMax= arr[0];
    }
    
    for(int i=1; i<n; i++){
        if(arr[i]> max){
            
            secondMax= max;
            max= arr[i];
        }

    }
   
    // for(int i=0; i<n;i++){
    //     if(arr[i]!= max && arr[i]> secondMax){
    //         secondMax= arr[i];
    //     }
    // }

     cout<< max<< endl;
    if(max>secondMax){
    cout<< "Second maximum element"<<secondMax<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}
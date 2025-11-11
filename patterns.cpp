#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<"enter row:";
    cin>>row;
    int col= row*2 - 1;

   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        // cout<<i<<j<<" ";
        if(i==j || i==1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<< endl;
   }



}
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<< "enter no. of rows: ";
    cin>>rows;
    int cols= rows*2 -1;

    for(int i=0; i<rows ;i++){
        for(int j=0; j<cols; j++){
            // if(i + j>=rows - 1 && j-i<=rows - 1 ){
            //     cout<< "*";
            // }
            // else{
            //     cout<< " ";
            // }
            if(i==j || i-j== rows*2 || i==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
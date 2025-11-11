#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter size";
    cin>>n;
    int rows=n*2;
    int cols= n*2 - 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<i<<j<< " ";
            
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
           if(i+j>=n-1 && j-i<=n-1 && i-j<=n && rows-i+cols-j>n && (i+j)%2==0){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
            
        }
        cout<<endl;
    }
}
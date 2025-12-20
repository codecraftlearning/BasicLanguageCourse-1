#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter size";
    cin>>n;
    int rows=n*2 - 1;
    int cols= n*2 - 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<i<<j<< " ";
            
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            if(i<=j && i+j<=rows-1 && i>=0 && i<=rows - 1 ){
                cout<<"  ";
            }
        else if(i>=j && i+j>=rows-1 && i>=0 && i<=rows - 1 )
        {
            cout<<"  ";
        }
            else{
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }


}
#include <iostream>
using namespace std;

void fibonacci(int n);

int main() {
    int num;
    cout<<"Enter the range for fibonacci series";
    cin>>num;
    fibonacci(num);
    
}

void fibonacci(int n){
    int x=0;
    int y=1;
    int z;
    if(n==1){
        cout<<x;
    }
    else if(n==2){
        cout<<x<<" "<<y;
    }
    else if(n>2){
        for (int i=3; i<=n;i++){
            cout<<x<<" ";
            z= x+y;
            cout<<z<<" ";
            x=y;
            y=z;
        }
    }
    
    cout<<endl;
}
//while loop, unnecesary
//fibonacci= x,y,z,a,b,c;  z=x+y; a=z+y; etc
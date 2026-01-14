

#include <iostream>

using namespace std;

void sum(int a , int b) {
    a += b;
    cout << "Sum -> " << a << endl;
}


void sum2(int* a , int* b) {
    *a += *b;
    cout << "Sum -> " << *a << endl;
}


int main() {

    int x = 10;
    int y = 20;

    sum2(&x, &y);

    cout << "X -> " << x << endl;
}





























// int main() {
    
//     // int x = 10;
//     // cout << "X -> " << &x << endl;
    
//     // int y = 20;
//     // cout << "Y -> " << &y << endl;

//     // x = y;
//     // cout << "X after assignment -> " << &x << endl;
//     // cout << "Y after assignment -> " << &y << endl;



//     // int arr[5] = {1, 2, 3, 4, 5};
//     // cout << arr << endl;

    
// }
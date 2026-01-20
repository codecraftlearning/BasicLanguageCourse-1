

#include <iostream>
using namespace std;

int main() {
    int arr[100], revArr[100];
    int n, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i]= arr[i] * 2;
    }

  
    cout << "Array after doubling every element: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (i = 0; i < n; i++) {
        revArr[i] = arr[n - i - 1];
    }

    cout << "Reversed array: ";
    for (i = 0; i < n; i++) {
        cout << revArr[i] << " ";
    }
    cout << endl;

}   

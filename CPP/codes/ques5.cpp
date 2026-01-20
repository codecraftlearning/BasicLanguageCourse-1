#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Ice Cream Menu" << endl;
    cout << "1. Vanilla" << endl;
    cout << "2. Chocolate" << endl;
    cout << "3. Strawberry" << endl;
    cout << "4. Mango" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose Vanilla!" << endl;
        break;
    case 2:
        cout << "You chose Chocolate!" << endl;
        break;
    case 3:
        cout << "You chose Strawberry!" << endl;
        break;
    case 4:
        cout << "You chose Mango!" << endl;
        break;
    default:
        cout << "Sorry, that flavor is not available." << endl;
    }

    return 0;
}

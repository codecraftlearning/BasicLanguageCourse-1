#include <iostream>
using namespace std;

int main()
{
    double n1, n2, result;
    char op;
    int choice;

    do
    {
        cout << "Enter first number:";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        switch (op)
        {
        case '+':
            result = n1 + n2;
            cout << "Result: " << result;
            break;

        case '-':
            result = n1 - n2;
            cout << "Result: " << result;
            break;

        case '*':
            result = n1 * n2;
            cout << "Result: " << result;
            break;

        case '/':
            if (n2 == 0)
            {
                cout << "Error: Division by zero!";
            }
            else
            {
                result = n1 / n2;
                cout << "Result: " << result;
            }
        
            break;

        default:
            cout << "Invalid operator!";
        }

        cout << "Do you want to continue? 1 for continue and 2 for exit";
        cin >> choice;

    } while (choice == 1);

}

#include <iostream>
using namespace std;

int main()
{
    int num, evenCount = 0, oddCount = 0;
    char choice;
    do
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << num << " is even.\n";
            evenCount++;
        }
        else
        {
            cout << num << " is odd.\n";
            oddCount++;
        }

        cout << "Continue?(1 for yes, 2 for no)";
        cin >> choice;
    } while (choice == 'yes');

    cout << "Total even: " << evenCount;
    cout << "Total odd: " << oddCount;
}

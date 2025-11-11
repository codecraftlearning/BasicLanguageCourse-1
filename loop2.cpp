#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{

    int range;
    cout << "enter a range:";
    cin >> range;

    int i = 1;
    while (++i <= range)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
        
    }
}

bool isPrime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
// write a program to print all the positive prime numbers within the given range. range should be taken from user.
//  user input: 10. output: 2,3,5,7


//Write a program to print all the armstrong numbers withing a range 0 <= range <= 9999. 
// write a program to generate and print fabonacci series till range 0 <= range <= 9999.
 
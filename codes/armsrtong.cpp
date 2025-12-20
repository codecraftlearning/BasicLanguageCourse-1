// Write a program to print all the armstrong numbers withing a range 0 <= range <= 9999.
// armstrong no. = 153= 1^3 + 5^3 + 3^3= 153
#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n);
int main()
{
    int num;
    cout << "End range for armstrong numbers:";
    cin >> num;
    armstrong(num);
}
void armstrong(int n)
{
    int a, b, c, m;
    for (int i = 0; i <= n; i++)
    {
        m = i;
        while (m = a * 100 + b * 10 + c)
        {
            int no = pow(a, 3) + pow(b, 3) + pow(c, 3);
            if (no == i)
            {
                cout << i;
            }
            cout << endl;
        }
    }
}

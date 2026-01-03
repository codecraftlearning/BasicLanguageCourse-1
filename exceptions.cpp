
#include <iostream>
#include <stdexcept>

using namespace std;

int divide(int a, int b)
{
    // if (a < 0) {
    //     throw 0;
    // }

    // if (b == 0)
    // {
    //     throw logic_error("Divide By 0 Exception Occured. Stopping the execution");
    // }

    return a / b;
}

int main()
{

    int num1, num2;
    cin >> num1;
    cin >> num2;

    try
    {
        cout << "res -> " << divide(num1, num2) << endl;
    } 
    // catch (const char* message) {
    //     cout << "Exception Occured -> "<< message << endl;
    // } catch (const int value) {
    //      cout << "Exception Occured -> Numerator must be greater than "<< value << endl;
    // } 
    catch (const logic_error& e) {
        cout << e.what() << endl;
    }
    catch(...) {
        cout << "Unknown Error";
    } 

    cout << "Process Completed";
}

/*

    exception ?


*/
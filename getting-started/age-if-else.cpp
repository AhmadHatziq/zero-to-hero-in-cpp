#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 18) // If age is greater than or equal to 18
    {
        cout << "You are eligible for a driver's license." << endl;
    } 
    else 
    {
        cout << "You are not eligible for a driver's license." << endl;
    }
    return 0;
}
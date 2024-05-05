#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yourName;
    cout << "Enter your name: ";
    getline(cin, yourName);
    cout << "Hello " << yourName << endl; // Printing User's name with Hello
    cout << "Welcome to Educative" << endl;
    return 0;
}
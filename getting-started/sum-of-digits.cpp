#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;
    cout << "Enter the number with at most 4 digits: " ; // Taking input in variable number
    cin >> number;
    if (number > 0 && number <= 9999) //Checking number range between 0 and 9999
    { 
        sum +=  number % 10; // Adding remainder to variable sum
        number = number / 10; // Adding quotient to the number
        if (number > 0)
        {
            sum +=  number % 10; // Adding remainder to variable sum
            number = number / 10; // Adding quotient to the number
        }
        if (number > 0)
        {
            sum +=  number % 10; //Adding remainder to variable sum
            number = number / 10; // Adding quotient to the number
        }
        if (number > 0)
        {
            sum +=  number % 10; // Adding remainder to variable sum
            number = number / 10; // Adding quotient to the number
        } 
        cout << "Sum of digits is: " << sum << endl;
    }
    else
    {
        cout << "Invalid number" << endl;
    }
    return 0;
}
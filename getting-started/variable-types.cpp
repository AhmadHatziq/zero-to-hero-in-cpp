#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str; // Declaring a variable of type string
   int number; // Declaring a variable of type integer
   double real; // Declaring a variable of type double
   bool isTrue; // Declaring a variable of type bool
   char letter; // Declaring a variable of type char

   cout << "Please input a word: ";
   cin >> str;
   cout << "Please input an integer: ";
   cin >> number;
   cout << "Please input a real number with decimal: ";
   cin >> real;
   cout << "Please input 0 or 1 [0 for false, 1 for true]: ";
   cin >> isTrue;
   cout << "Please input a letter: ";
   cin >> letter;
   cout << "The value of each variable is enclosed in brackets:" << std::endl;
   cout << "str (" << str << ")" << endl;
   cout << "number (" << number << ")" << endl;
   cout << "real number (" << real << ")" << endl;
   cout << "isTrue (" << isTrue << ")" << endl;
   cout << "letter (" << letter << ")" << endl;
   return 0;
}

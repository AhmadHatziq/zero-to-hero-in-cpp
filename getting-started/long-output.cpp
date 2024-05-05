#include <iostream>
#include <string>
using namespace std;

int main()
{
   int persons = 5; // Defining a variable of type int to store the number of persons
   double totalWeight = 350.6; // Defining a variable of type double to store the total weight of 5 persons
   bool flag = true; // Defining a variable of bool type
   char team = 'A'; // Defining a variable of type character
   string status = "Winner"; // Defining a variable of type string to store the label to be displayed 
   cout << "Total weight of " << persons << " persons of the " << status << " team " << team
   << " is: " << totalWeight << ", and "
   << "the value of flag is: " << flag << endl;
   return 0;
}
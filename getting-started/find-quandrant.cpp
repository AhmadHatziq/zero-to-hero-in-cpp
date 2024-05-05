#include <iostream>
using namespace std;

int main()
{
  int x;
  int y;
  cout << "Enter value of x:" << endl;
  cin >> x;
  cout << "Enter value of y:" << endl;
  cin >> y;
  if (x > 0 && y > 0)
  {
    cout << "The point lies in the 1st Quadrant" << endl;
  }
  else 
  {
    if (x < 0 && y > 0)
    {
      cout << "The point lies in the 2nd Quadrant" << endl;
    }
    else
    {
      if (x < 0 && y < 0)
      {
        cout << "The point lies in the 3rd Quadrant" << endl;
      }
      else
      {
        if (x > 0 && y < 0)
        {
          cout << "The point lies in the 4th Quadrant" << endl;
        }
        else
        {
          cout << "The point does not lie in any Quadrant" << endl;
        }
      }
    }
 }
   return 0;
}
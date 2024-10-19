#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "enter year like 2000, 2001 etc: ";
  cin >> year;

  if (year % 4 == 0 || year % 400 == 0)
  {
    cout << "its a leap year";
  }
  else
  {
    cout << "its a non leap year";
  }

  return 0;
}
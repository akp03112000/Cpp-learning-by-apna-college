#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c)
  {
    cout << "greator is: " << a;
  }
  if (a > b && a < c)
  {
    cout << "greator is: " << c;
  }
  if (a < b && b > c)
  {
    cout << "greator is: " << b;
  }
  else if (a < b && b < c)
  {
    cout << "greator is: " << c;
  }

  return 0;
}
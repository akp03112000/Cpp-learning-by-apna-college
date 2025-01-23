#include <iostream>
// #define pi = 3.14
using namespace std;

int main()
{
  float radius;
  cout << "Enter the value of radius: ";
  cin >> radius;
  float pi = 3.14;

  float area = pi * radius * radius;
  cout << "area of circle is: " << area;

  return 0;
}
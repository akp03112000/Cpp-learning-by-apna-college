#include <iostream>
using namespace std;

int subtract(int a, int b)
{
  int b_twos_complement = ~b + 1;
  int result = a + b_twos_complement;
  return result;
}

int main()
{
  int a = 15;
  int b = 10;

  int c;
  c = subtract(a, b);
  cout << c;

  return 0;
}
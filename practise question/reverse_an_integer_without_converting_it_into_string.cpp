#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number: ";
  cin >> n;

  int sum = 0;
  // int counter;
  while (n != 0)
  {
    int counter = n % 10;
    sum = sum * 10 + counter;
    n /= 10;
  }
  cout << sum;

  return 0;
}
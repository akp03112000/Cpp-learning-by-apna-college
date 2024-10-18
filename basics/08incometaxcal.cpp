#include <iostream>
using namespace std;

int main()
{
  int income;
  cout << "enter the income: ";
  cin >> income;
  int tax;

  if (income < 500000)
  {
    cout << "tax: " << 0;
  }
  if (income > 500000 && income < 1000000)
  {
    tax = income + ((20 * income) / 100);
    cout << "tax: " << tax;
  }
  else if (income > 1000000)
  {
    tax = income + ((30 * income) / 100);
    cout << "tax: " << tax;
  }
  return 0;
}
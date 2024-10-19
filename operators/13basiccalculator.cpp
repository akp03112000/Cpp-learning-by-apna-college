#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "enter 1st number: ";
  cin >> a;
  cout << "enter 2nd number: ";
  cin >> b;

  char operation;
  cout << "Enter operat like (+, - , / , * ): ";
  cin >> operation;

  int sum = a + b;
  int sub = a - b;
  int mul = a * b;
  int div = a / b;

  switch (operation)
  {
  case '+':
    cout << sum;
    break;
  case '-':
    cout << sub;
    break;
  case '*':
    cout << mul;
    break;
  case '/':
    cout << div;
    break;
  }

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int principal, rate, time;
  cin >> principal >> rate >> time;
  int simple_interest;
  simple_interest = (principal * rate * time) / 100;
  cout << simple_interest;

  return 0;
}
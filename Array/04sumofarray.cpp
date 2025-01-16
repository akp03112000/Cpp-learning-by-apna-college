#include <iostream>
using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40};
  int sum = 0;
  int n;
  n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  cout << sum;

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the value of n: ";
  cin >> n;
  // n = sizeof(arr(n)) / sizeof(int);
  int arr[n];
  cout << "enter the elements of arr: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int mid;
  mid = n / 2;
  cout << arr[mid];

  return 0;
}
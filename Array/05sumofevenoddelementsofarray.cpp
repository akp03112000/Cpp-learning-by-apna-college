#include <iostream>
using namespace std;

int main()
{
  int arr[] = {10, 4, 7, 6, 5, 8, 15, 19, 14, 23};
  int n;
  int evenNum = 0;
  int oddNum = 0;
  n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      evenNum += arr[i];
    }
    else
    {
      oddNum += arr[i];
    }
    }
  cout << evenNum << endl;
  cout << oddNum << endl;

  return 0;
}
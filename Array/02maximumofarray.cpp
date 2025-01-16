#include <iostream>
using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int n;
  n = sizeof(arr) / sizeof(int);
  int max = arr[0];
  // int min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  cout << max << endl;
  int min = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << min;

  return 0;
}
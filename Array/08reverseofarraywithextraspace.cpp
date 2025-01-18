#include <iostream>
using namespace std;

int main()
{
  int arr[] = {
      1,
      2,
      3,
      4,
      5,
      6,
      12,
      15,
      4561,
      87645,
  };
  int n = sizeof(arr) / sizeof(int);

  int copyarr[n];
  for (int i = 0; i < n; i++)
  {
    int j = n - 1 - i;
    copyarr[i] = arr[j];
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] << copyarr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }

  return 0;
}
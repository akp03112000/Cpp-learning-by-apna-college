#include <iostream>
using namespace std;

void printsubarrays(int *arr, int n)
{
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << ",";
    }
    cout << endl;
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  printsubarrays(arr, n);

  return 0;
}
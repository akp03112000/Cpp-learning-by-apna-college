#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int arr[] = {1, 5, 6, 9, 7, 5, 2};
  int n = sizeof(arr) / sizeof(int);

  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    /*int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;*/
    start++;
    end--;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }

  return 0;
}
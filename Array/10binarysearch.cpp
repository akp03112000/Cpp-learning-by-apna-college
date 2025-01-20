#include <iostream>
using namespace std;

int binarysearch(int *arr, int key, int n)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int n = sizeof(arr) / sizeof(int);
  int key = 20;

  int result = binarysearch(arr, key, n);

  if (result != -1)
  {
    cout << "Key found at index: " << result << endl;
  }
  else
  {
    cout << "Key not found" << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n = 5;
  int key = 10;
  int arr[] = {2, 5, 8, 10, 14};
  cout << linearsearch(arr, n, key);

  return 0;
}
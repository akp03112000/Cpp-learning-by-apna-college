#include <iostream>
#include <climits>
using namespace std;

void maxsubarrayssum(int *arr, int n)
{
  int maxsum = INT_MIN;
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      int currsum = 0;
      for (int i = start; i <= end; i++)
      {
        currsum += arr[i];
      }
      cout << currsum << ",";
      maxsum = max(maxsum, currsum);
    }
    cout << endl;
  }
  cout << "the maximum sum of subarrays is: " << maxsum;
}

int main()
{
  int arr[] = {
      2,
      -3,
      6,
      -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);

  maxsubarrayssum(arr, n);

  return 0;
}
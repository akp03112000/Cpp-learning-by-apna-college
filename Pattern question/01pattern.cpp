#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int start = 0;
  int end = n - 1;
  for (int i = start; i < n; i++)
  {
    for (int j = end; j > 0; j--)
    {
      cout << "*";
    }
    start++;
    end--;
    cout << endl;
  }

  return 0;
}
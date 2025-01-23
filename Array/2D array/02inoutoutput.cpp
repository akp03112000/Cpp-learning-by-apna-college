#include <iostream>
using namespace std;

int main()
{
  int students[2][2];
  int n = 2;
  int m = 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "enter the elements: ";
      cin >> students[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << students[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}
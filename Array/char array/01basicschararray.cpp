#include <iostream>
using namespace std;

int main()
{
  char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'};
  char arr2[10] = "hello";
  char arr3[] = "hiiii";

  cout << arr << endl;
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  cout << arr[4] << endl;
  cout << arr2 << endl;
  cout << arr3 << endl;
  return 0;
}
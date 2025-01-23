#include <iostream>
using namespace std;

int main()
{
  float pencil, pen, eraser;

  cout << "enter the cost of pencil: ";
  cin >> pencil;
  cout << "enter the cost of pen: ";
  cin >> pen;
  cout << "enter the cost of eraser: ";
  cin >> eraser;

  float sum;
  sum = pencil + pen + eraser;
  cout << "The cost of pen, pencil and eraser is: ";
  cout << sum << endl;
  float withGST;
  withGST = (18 * (sum)) / 100;
  float withGSTcost = withGST + sum;
  cout << "With GST cost is: " << withGSTcost;

  return 0;
}
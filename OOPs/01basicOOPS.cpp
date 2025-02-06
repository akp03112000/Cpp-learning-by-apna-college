#include <iostream>
using namespace std;

class Car
{
  char name;
  int speed;
  // int milage;
  char colour;

  int milage(int distance, int litre)
  {
    return (distance / litre);
  }
};

int main()
{
  Car c1;
  cout << sizeof(c1);

  return 0;
}
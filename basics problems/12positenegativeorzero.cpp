#include <iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  if(a>0){
    cout<<"its a positive number";
  }
  if(a==0){
    cout<<"its zero";
  }
  else if(a<0){
    cout<<"its negative number";
  }
  
  return 0;
}
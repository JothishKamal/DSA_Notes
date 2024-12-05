#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int *p;
  p = &a;

  cout << a << endl;
  cout << &a << endl;
  cout << p << endl;
  cout << *p << endl;

  p = nullptr;
  p = new int[5];
  p[0] = 12;
  p[1] = 15;
  p[2] = 25;

  delete[] p;
  return 0;
}
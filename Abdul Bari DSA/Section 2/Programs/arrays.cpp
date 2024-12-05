#include <iostream>

using namespace std;

int main()
{
  // int A[5];
  // A[0] = 12;
  // A[1] = 15;
  // A[2] = 25;

  int A[10] = {2, 4, 6, 8, 10, 12, 14};

  // Initialize all elements to 0
  // int B[10] = {0};

  // For loop to print all elements of the array
  for (int i = 0; i < 10; i++)
  {
    cout << A[i] << endl;
  }

  // For each loop to print all elements of the array
  for (int i : A)
  {
    cout << i << endl;
  }
  return 0;
}
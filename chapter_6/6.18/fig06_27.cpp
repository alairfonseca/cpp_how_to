/*
  6.18. Function Templates
*/

#include <iostream>

#include "maximum.h"

using std::cout;
using std::endl;

int main() {
  int int1 = 1;
  int int2 = 2;
  int int3 = 3;

  double double1 = 1.0;
  double double2 = 2.0;
  double double3 = 3.0;

  char char1 = 'a';
  char char2 = 'b';
  char char3 = 'c';

  cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;
  cout << "The maximum double value is: " << maximum(double1, double2, double3)
       << endl;
  cout << "The maximum character value is: " << maximum(char1, char2, char3)
       << endl;

  return 0;
}
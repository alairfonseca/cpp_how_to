/*
  ## 6.20. Initializing and using a reference.
*/

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int x = 3;
  int &y = x;

  cout << "x = " << x << endl << "y = " << y << endl;

  y = 7;

  cout << "x = " << x << endl << "y = " << y << endl;

  return 0;
}
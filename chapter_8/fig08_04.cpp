/*
  8.3. Pointer Operators
*/

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int y = 5;
  int *yPtr;

  yPtr = &y;

  cout << yPtr << endl;
  cout << *yPtr << endl;

  *yPtr = 2;

  cout << y << endl;
  cout << *yPtr << endl;

  return 0;
}
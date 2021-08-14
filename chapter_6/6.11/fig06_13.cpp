/*
  ## 6.11. Function Call Stack and Activation Records

  function call stack (sometimes referred to as the program execution stack).
  This data structure working "behind the scenes" supports the function
  call/return mechanism. It also supports the creation, maintenance and
  destruction of each called function's automatic variables.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int square(int);

int main() {
  int a = 10;

  cout << a << " squared: " << square(a) << endl;

  return 0;
}

int square(int x) { return x * x; }
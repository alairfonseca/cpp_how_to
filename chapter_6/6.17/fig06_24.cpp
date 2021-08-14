// 6.17. Function Overloading

#include <iostream>

using std::cout;
using std::endl;

int square(int x) {
  int result = x * x;

  cout << "square of integer " << x << " is " << result << endl;

  return result;
}

double square(double x) {
  double result = x * x;

  cout << "square of double " << x << " is " << result << endl;

  return result;
}

int main() {
  square(7);
  square(7.5);

  return 0;
}
/*
  8.6. Pass-by-value used to cube a variable's value.
*/

#include <iostream>

using std::cout;
using std::endl;

void cubeByValue(int *);

int main() {
  int number = 13;

  cout << "Original number: " << number << endl;

  cubeByValue(&number);

  cout << "\nThe new value of number is " << number << endl;

  return 0;
}

void cubeByValue(int *value) { *value = *value * *value * *value; }
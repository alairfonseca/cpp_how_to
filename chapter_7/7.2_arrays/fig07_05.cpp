/*
  7.5. Generating values to be placed into elements of an array.
*/

#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

int main() {
  const int arraySize = 10;
  int array[arraySize] = {0};

  cout << "Element" << setw(13) << "Value" << endl;

  for (int i = 0; i < arraySize; i++) {
    array[i] = 2 + 2 * i;
  }

  for (int i = 0; i < arraySize; i++) {
    cout << setw(7) << i << setw(13) << array[i] << endl;
  }

  return 0;
}
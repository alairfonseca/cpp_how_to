#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    cout << setw(4) << array[i];
  }

  cout << "\n";
}
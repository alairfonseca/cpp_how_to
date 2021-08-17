/*
  8.16. sizeof operator when applied to an array name returns the number of
  bytes in the array.
*/

#include <iomanip>
#include <iostream>

#include "../utils/utils.h"

using std::cout;
using std::endl;
using std::setw;

size_t getSize(double *);

int main() {
  double array[6] = {1, 2, 3, 4, 5, 6};
  double *arrayPtr = array;

  cout << "test: " << endl;
  printArray(array, 6);

  cout << "arrayPtr: " << *arrayPtr << endl;

  cout << "arrayPtr + 2: " << *(arrayPtr += 2) << endl;

  cout << "The number of bytes in the array is " << sizeof(array);
  // cout << "The number of bytes in the array is " << sizeof(&array);
  // cout << "The number of bytes in the array is " << sizeof(*array);
  // cout << "The number of bytes in the array is " << sizeof(array[1]);

  cout << "\nThe number of bytes returned by getSize is " << getSize(array)
       << endl;

  return 0;
}

size_t getSize(double *ptr) { return sizeof(ptr); }
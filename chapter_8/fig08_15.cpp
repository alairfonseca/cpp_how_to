/*
  8.15. Selection sort with pass-by-reference.
*/

#include <iomanip>
#include <iostream>

#include "../utils/utils.h"

using std::cout;
using std::endl;
using std::setw;

void selectionSort(int* const, const int);
void swap(int* const, int* const);

int main() {
  const int arraySize = 10;
  int array[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  cout << "original array order" << endl;
  printArray(array, arraySize);

  selectionSort(array, arraySize);

  cout << "\nsorted (by selection sort) array" << endl;
  printArray(array, arraySize);

  return 0;
}

void selectionSort(int* const array, const int size) {
  int smallest;

  for (int i = 0; i < size - 1; i++) {
    smallest = i;

    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[smallest]) {
        smallest = j;
      }
    }

    swap(&array[i], &array[smallest]);
  }
}

void swap(int* const element1Ptr, int* const element2Ptr) {
  int tmp = *element1Ptr;

  *element1Ptr = *element2Ptr;
  *element2Ptr = tmp;
}
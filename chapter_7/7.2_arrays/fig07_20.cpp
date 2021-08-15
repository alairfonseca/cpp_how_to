/*
  7.20. Sorting an array with insertion sort.

  insertion sort
*/

#include <iomanip>
#include <iostream>

#include "../../utils/utils.h"

using std::cout;
using std::endl;
using std::setw;

void insertionSort(int array[], int arraySize);

int main() {
  const int arraySize = 10;
  int array[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

  cout << "Original array:" << endl;
  printArray(array, arraySize);

  cout << "\nstep by step: " << endl;
  insertionSort(array, arraySize);

  cout << "Sorted array:" << endl;
  printArray(array, arraySize);

  return 0;
}

void insertionSort(int array[], int arraySize) {
  int insert;

  for (int i = 0; i < arraySize; i++) {
    insert = array[i];

    int moveItem = i;

    while (moveItem > 0 && array[moveItem - 1] > insert) {
      array[moveItem] = array[moveItem - 1];

      moveItem--;
    }

    array[moveItem] = insert;

    cout << "position " << i << ": ";
    printArray(array, arraySize);
  }
}
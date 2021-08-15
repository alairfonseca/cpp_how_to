#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

template <class T>

void printArray(T array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    cout << setw(4) << array[i];
  }

  cout << "\n";
}

template <class T>

void printArray(T array[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << setw(4) << array[i][j];
    }

    cout << endl;
  }

  cout << "\n";
}
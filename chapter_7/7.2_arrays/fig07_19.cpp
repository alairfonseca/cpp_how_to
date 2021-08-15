/*
  7.19. Linear search of an array.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int linearSearch(const int array[], int key, int sizeOfArray);

int main() {
  const int arraySize = 100;
  int array[arraySize];
  int searchKey;

  for (int i = 0; i < arraySize; i++) {
    array[i] = 2 * i;
  }

  cout << "Enter integer search key: ";
  cin >> searchKey;

  int element = linearSearch(array, searchKey, arraySize);

  if (element != -1) {
    cout << "Found value in element " << element << endl;
  } else {
    cout << "Value not found" << endl;
  }

  return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray) {
  for (int i = 0; i < sizeOfArray; i++) {
    if (array[i] == key) {
      return i;
    }
  }

  return -1;
}
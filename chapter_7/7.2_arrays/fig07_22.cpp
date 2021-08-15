/*
  7.22. Initializing multidimensional arrays.

  multidimensional arrays
*/

#include <iomanip>
#include <iostream>

#include "../../utils/utils.h"

using std::cout;
using std::endl;
using std::setw;

int main() {
  const int arraySize = 10;
  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int array2[2][3] = {1, 2, 3, 4, 5};
  int array3[2][3] = {{1, 2}, {4}};

  cout << "Values in array1 by row are:" << endl;
  printArray(array1, 2, 3);

  cout << "Values in array2 by row are:" << endl;
  printArray(array2, 2, 3);

  cout << "Values in array3 by row are:" << endl;
  printArray(array3, 2, 3);

  return 0;
}
/*
  7.3. Initializing an array's elements to zeros and printing the array.
*/

#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

int main() {
  int array[10] = {0};

  cout << "Element" << setw(13) << "Value" << endl;

  for (int i = 0; i < 10; i++) {
    cout << setw(7) << i << setw(13) << array[i] << endl;
  }

  return 0;
}
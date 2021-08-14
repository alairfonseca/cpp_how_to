/*
  ## 6.22. Default arguments to a function.
*/

#include <iostream>

using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main() {
  cout << "The default box volume is: " << boxVolume();

  cout << "\n\nThe volume of a box with length 10,\n"
       << "width 1 and height 1 is: " << boxVolume(10);

  cout << "\n\nThe volume of a box with length 10,\n"
       << "width 5 and height 1 is: " << boxVolume(10, 5);

  cout << "\n\nThe volume of a box with length 10,\n"
       << "width 5 and height2 is: " << boxVolume(10, 5, 2) << endl;

  return 0;
}

int boxVolume(int length, int width, int height) {
  return length * width * height;
}
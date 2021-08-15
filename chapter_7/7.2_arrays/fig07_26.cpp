/*
  7.26. C++ Standard Library class template vector.

  multidimensional arrays
*/

#include <iomanip>
#include <iostream>
#include <vector>

#include "../../utils/utils.h"

using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::setw;
using std::srand;
using std::vector;

void outputVector(const vector<int>& vec);
void initializeVector(vector<int>& vec);

int main() {
  vector<int> integers1(7);
  vector<int> integers2(10);

  srand(time(0));

  initializeVector(integers1);
  initializeVector(integers2);

  cout << "Size of vector integers1 is " << integers1.size()
       << "\nvector after initialization:" << endl;
  outputVector(integers1);

  cout << endl;

  cout << "Size of vector integers2 is " << integers2.size()
       << "\nvector after initialization:" << endl;
  outputVector(integers2);

  integers1 = integers2;
  cout << "integers1 now is: " << endl;
  outputVector(integers1);

  return 0;
}

void outputVector(const vector<int>& vec) {
  size_t i;

  for (i = 0; i < vec.size(); i++) {
    cout << setw(12) << vec[i];

    if ((i + 1) % 4 == 0) {
      cout << endl;
    }
  }

  if (i % 4 != 0) {
    cout << endl;
  }
}

void initializeVector(vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    vec[i] = 1 + rand() % 10;
  }
}
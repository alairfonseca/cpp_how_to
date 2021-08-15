/*
  7.10. Die-rolling program using an array instead of switch.
*/

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::rand;
using std::setw;
using std::srand;
using std::time;

int main() {
  const int arraySize = 6;
  int frequency[arraySize] = {0};

  srand(time(0));

  for (int roll = 1; roll <= 6000000; roll++) {
    frequency[rand() % 6]++;
  }

  cout << "Face" << setw(13) << "Frequency" << endl;

  for (int face = 1; face <= arraySize; face++) {
    cout << setw(4) << face << setw(13) << frequency[face - 1] << endl;
  }

  return 0;
}
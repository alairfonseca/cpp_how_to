#include <cstdlib>
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::setw;
using std::srand;
using std::time;

int main() {
  int frequency1 = 0;
  int frequency2 = 0;
  int frequency3 = 0;
  int frequency4 = 0;
  int frequency5 = 0;
  int frequency6 = 0;

  int face;

  srand(time(0));

  for (int counter = 1; counter <= 6000000; counter++) {
    face = 1 + rand() % 6;

    switch (face) {
      case 1:
        frequency1++;
        break;
      case 2:
        frequency2++;
        break;
      case 3:
        frequency3++;
        break;
      case 4:
        frequency4++;
        break;
      case 5:
        frequency5++;
        break;
      case 6:
        frequency6++;
        break;
      default:
        break;
    }
  }

  cout << "1" << setw(13) << frequency1 << "\n2" << setw(13) << frequency2
       << "\n3" << setw(13) << frequency3 << "\n4" << setw(13) << frequency4
       << "\n5" << setw(13) << frequency5 << "\n6" << setw(13) << frequency6
       << endl;

  return 0;
}

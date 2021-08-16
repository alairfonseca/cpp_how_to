/*
  8.10. Converting a string to uppercase.
*/

#include <iostream>

using std::cout;
using std::endl;

void convertToUppercase(char *);

int main() {
  char phrase[] = "characters and $32.98";

  cout << "The phrase before conversion is: " << phrase;

  convertToUppercase(phrase);

  cout << "\nThe phrase after conversion is: " << phrase << endl;

  return 0;
}

void convertToUppercase(char *sPtr) {
  while (*sPtr != '\0') {
    if (islower(*sPtr)) {
      *sPtr = toupper(*sPtr);
    }

    sPtr++;
  }
}
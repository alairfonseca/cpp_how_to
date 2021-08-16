/*
  8.11. Printing a string one character at a time using a nonconstant pointer to
  constant data.
*/

#include <iostream>

using std::cout;
using std::endl;

void printCharacters(const char[]);

int main() {
  char phrase[] = "print characters of a string";
  char *phrasePtr = &phrase[0];

  cout << "The string is:\n";

  // printCharacters(phrase);
  printCharacters(phrasePtr);

  cout << endl;

  return 0;
}

// void printCharacters(const char *sPtr) {
//   for (; *sPtr != '\0'; sPtr++) {
//     cout << *sPtr << endl;
//   }
// }

void printCharacters(const char sPtr[]) {
  for (; *sPtr != '\0'; sPtr++) {
    cout << *sPtr;
  }
}
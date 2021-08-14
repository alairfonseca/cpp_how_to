#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cout;
using std::endl;
using std::rand;
using std::srand;
using std::time;

enum Status { CONTINUE, WON, LOST };

int rollDices();
void checkFirstResult(int dicesResult, int& playerPoints, Status& gameStatus);
void checkSecondResult(int dicesResult, int playerPoints, Status& gameStatus);
int checkFinalResult(Status gameStatus);

int main() {
  int playerPoints;
  Status gameStatus;

  srand(time(0));

  int sumOfDices = rollDices();

  checkFirstResult(sumOfDices, playerPoints, gameStatus);

  while (gameStatus == CONTINUE) {
    sumOfDices = rollDices();

    checkSecondResult(sumOfDices, playerPoints, gameStatus);
  }

  return checkFinalResult(gameStatus);
}

int rollDices() {
  int result;
  int firstDice = 1 + rand() % 6;
  int secondDice = 1 + rand() % 6;

  result = firstDice + secondDice;

  cout << "Player rolled " << firstDice << " and " << secondDice
       << " result is: " << result << endl;

  return result;
}

void checkFirstResult(int dicesResult, int& playerPoints, Status& gameStatus) {
  switch (dicesResult) {
    case 7:
    case 11:
      gameStatus = WON;
      break;
    case 2:
    case 3:
    case 12:
      gameStatus = LOST;
      break;
    default:
      gameStatus = CONTINUE;
      playerPoints = dicesResult;
      cout << "Point is " << playerPoints << endl;
      break;
  }
}

void checkSecondResult(int dicesResult, int playerPoints, Status& gameStatus) {
  if (dicesResult == playerPoints) {
    gameStatus = WON;
  } else if (dicesResult == 7) {
    gameStatus = LOST;
  }
}

int checkFinalResult(Status gameStatus) {
  if (gameStatus == WON) {
    cout << "PLayer wins" << endl;
  } else {
    cout << "Player loses" << endl;
  }

  return 0;
}
/*
- Rock crushes scissors
- Paper covers rock
- Scissors cuts paper
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
srand (time(NULL));

int computer = rand() % 2 + 1;

int user;

std::cout << "====================\n";
std::cout << "Rock, paper, scissors!\n";
std::cout << "====================\n";

std::cout << "Choose one of the options below:\n";
    
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

if (user == 1) {
  std::cout << "You choose: ✊\n";
}
else if (user == 2) {
  std::cout << "You choose: ✋\n";
}
else {
  std::cout << "You choose: ✌️\n";
}

if (computer == 1) {
  std::cout << "Computer choose: ✊\n";
}
else if (computer == 2) {
  std::cout << "Computer choose: ✋\n";
}
else {
  std::cout << "Computer choose: ✌️\n";
}
  
// If case is rock
if (user == 1 && computer == 3) {
  std::cout << "You win.\n";
}
else if (computer == 1 && user == 3) {
  std::cout << "You lose.\n";
}

// If case is paper
else if (user == 2 && computer == 1) {
  std::cout << "You win.\n";
}
else if (computer == 2 && user == 1) {
  std::cout << "You lose.\n";
}

// If case is scissors
else if (user == 3 && computer == 2) {
  std::cout << "You win.\n";
}
else if (computer == 3 && user == 2) {
  std::cout << "You lose.\n";
}

else {
  std::cout << "It's a tie.\n";
}

}

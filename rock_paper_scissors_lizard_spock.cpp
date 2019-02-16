/*
- Rock crushes scissors
- Rock crushes lizard
- Paper covers rock
- Paper disproves Spock
- Scissors cuts paper
- Scissors decapitates lizard
- Lizard poisons Spock
- Lizard eats paper
- Spock smashes scissors
- Spock vaporizes rock
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
srand (time(NULL));

int computer = rand() % 6;

int user;
  
std::cout << "====================\n";
std::cout << "Rock, paper, scissors, lizard, Spock!\n";
std::cout << "====================\n";

std::cout << "Choose one of the options below:\n";
    
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";
  
std::cin >> user; 
  
if (user == 1) {
  std::cout << "You choose: ✊\n";
}
else if (user == 2) {
  std::cout << "You choose: ✋\n";
}
else if (user == 3) {
  std::cout << "You choose: ✌️\n";
}
else if (user == 4) {
  std::cout << "You choose: 🦎\n";
}
else {
  std::cout << "You choose: 🖖\n";
}

if (computer == 1) {
  std::cout << "Computer choose: ✊\n";
}
else if (computer == 2) {
  std::cout << "Computer choose: ✋\n";
}
else if (computer == 3) {
  std::cout << "Computer choose: ✌️\n";
}
else if (computer == 4) {
  std::cout << "Computer choose: 🦎\n";
}
else {
  std::cout << "Computer choose: 🖖\n";
}

// If case is rock
if (user == 1 && computer == 3 || user == 1 && computer == 4) {
  std::cout << "You win.\n";
}
else if (computer == 1 && user == 3 || computer == 1 && user == 4) {
  std::cout << "You lose.\n";
}

// If case is paper
else if (user == 2 && computer == 1 || user == 2 && computer == 5) {
  std::cout << "You win.\n";
}
else if (computer == 2 && user == 1 || computer == 2 && user == 5) {
  std::cout << "You lose.\n";
}

// If case is scissors
else if (user == 3 && computer == 2 || user == 3 && computer == 4) {
  std::cout << "You win.\n";
}
else if (computer == 3 && user == 2 || computer == 3 && user == 4) {
  std::cout << "You lose.\n";
}

// If case is lizard
else if (user == 4 && computer == 5 || user == 4 && computer == 2) {
  std::cout << "You win.\n";
}
else if (computer == 4 && user == 5 || computer == 4 && user == 2) {
  std::cout << "You lose.\n";
}

// If case is Spock
else if (user == 5 && computer == 3 || user == 5 && computer == 1) {
  std::cout << "You win.\n";
}
else if (computer == 5 && user == 3 || computer == 5 && user == 1) {
  std::cout << "You lose.\n";
}

else {
  std::cout << "It's a tie.\n";
}
  
}

//character.cpp
#include "../header/Character.h"
#include <iostream>

using namespace std;

void Character::dies() {
    string choice;
    cout << "You've lost the game" << endl;
    cout << "Would you like to start over 'r' or quit the game 'q'?" << endl;
    cin >> choice;

    if (choice == "r") {
        // Story *test = new Story();
        // test -> intro();
        intro();
    }
    else if (choice == "q") {
        exit(0);
    }
}

void Character::lives() {
    string choice;
    cout << "Congrats you've survived Jurassic Park and you've finished the game." << endl;
    cout << "Would you like to play again 'r' or quit the game 'q'?" << endl;
    cin >> choice;

    if (choice == "r") {
        // Story *test1 = new Story();
        // test1 -> intro();    }
        intro();
    }
    else if (choice == "q") {
        exit(0);
    }
}

/*void Character::getInfo() {

}*/
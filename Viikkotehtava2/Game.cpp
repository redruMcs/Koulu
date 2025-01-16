#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Game::Game(int maxNumber)
    : maxNumber(maxNumber), playerGuess(0), randomNumber(0), numOfGuesses(0) {
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game() {
}

void Game::play() {
    cout << "[DEBUG] Game::play() called. Starting the game." << endl;
    cout << "maxNumber = " << maxNumber << endl;

    while (true) {
        cout << "Anna luku? ";
        cin >> playerGuess;
        numOfGuesses++;

        cout << "[DEBUG] Player guessed: " << playerGuess << endl;

        if (playerGuess == randomNumber) {
            cout << "Oikein!" << endl;
            break;
        }

        if (playerGuess < randomNumber) {
            cout << "Luku on suurempi" << endl;
        }

        if (playerGuess > randomNumber) {
            cout << "Luku on pienempi" << endl;
        }
    }

    printGameResult();
}

void Game::printGameResult() const {
    cout << "Vastaus oli: " << randomNumber << ". " << "Yritit vastausta: " << numOfGuesses << " kertaa" << endl;
}

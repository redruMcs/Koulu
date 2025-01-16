#include "Game.h"
#include <iostream>

using namespace std;

int main() {

    int maxnum = 40;

    Game game(maxnum);
    game.play();

    cout << "[DEBUG] main() function exiting." << endl;
    return 0;
}

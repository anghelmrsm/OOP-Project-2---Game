#pragma once
#include <vector>
#include "deck.h"
#include "player.h"

class Game
{
private:
    Deck deck;
    std::vector <Player> players;
    Player* currPlayer;
public:

    ///Constructor
    Game();

    ///Functie de resetare a pachetului si a jucatorului
    void resetGame();

    ///Functie de start a jocului
    void start();

    ///Nivelul 1
    bool level1();

    ///Nivelul 2
    bool level2();

    ///Nivelul 3
    bool level3();

    ///Nivelul 4
    bool level4();

};

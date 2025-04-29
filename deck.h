#pragma once
#include <vector>
#include <string>
#include "card.h"

class Deck
{
private:
    std::vector <Card> cards;
public:

    ///Constructor
    Deck();

    ///Functie de restare a pachetului de carti
    void reset();

    ///Functie pentru afisarea pachetului
    void showCards();

    ///Functie de amestecare a cartilor
    void shuffle();

    ///Functie de alegere a unei carti random din pachet
    Card draw();
};

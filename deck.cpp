#include "deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <cstdlib>

///Constructor
Deck :: Deck()
{
    reset();
}

void Deck :: reset()
{
    std::vector <std::string> suits;
    suits.push_back("Hearts");
    suits.push_back("Diamonds");
    suits.push_back("Clubs");
    suits.push_back("Spades");

    for (int val=2; val<15; val++)
        for (auto suit : suits)
            cards.push_back(Card(val, suit));

    shuffle();
}

///Functie de afisare a pachetului
void Deck :: showCards()
{
    for (auto card : cards)
        std::cout<<card.toString()<<"\n";
}

///Functie de amestecare a cartilor
void Deck :: shuffle()
{
    std::shuffle(cards.begin(), cards.end(), std::default_random_engine(std::time(nullptr)));
}

///Functie de alegere a unei carti random din pachet
Card Deck :: draw()
{
    int randomInd = rand() % cards.size();
    Card drawn = cards[randomInd];
    cards.erase(cards.begin() + randomInd);
    return drawn;
}

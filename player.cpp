#include "player.h"

///Constructor
Player :: Player()
{
    reset();
    fails = 0;
}

///Setter pentru numele jucatorului
void Player :: setName(const std::string& str)
{
    name = str;
}

///Getter pentru numele jucatorului
std::string Player :: getName() const
{
    return name;
}

///Functie de revenire la inceput
void Player :: reset()
{
    cards.clear();
    level = 1;
}

///Functie de avansare in nivel
void Player :: advanceLevel()
{
        level++;
}

///Getter pentru nivel
int Player :: getLevel()
{
    return level;
}

///Functie de adaugare la vector
void Player :: addCard(const Card& c)
{
    cards.push_back(c);
}

///Getter pentru vector
const std::vector <Card>& Player :: getCards() const
{
    return cards;
}

///Functie de incrementare a greselilor
void Player :: incrementFails()
{
    fails++;
}

///Functie de resetare a greselilor
void Player :: resetFails()
{
    fails = 0;
}

///Getter pentru greseli
int Player :: getFails() const
{
    return fails + 1;
}

///Functie pentru stergerea vectorului de carti
void Player :: deleteCards()
{
    cards.clear();
}

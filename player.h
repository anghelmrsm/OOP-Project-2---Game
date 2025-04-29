#pragma once
#include <vector>
#include <string>
#include "card.h"

class Player
{
private:
    int level,fails;
    std::vector <Card> cards;
    std::string name;

public:
    ///Constructor
    Player();

    ///Setter pentru numele jucatorului
    void setName(const std::string& str);

    ///Getter pentru numele jucatorului
    std::string getName() const;

    ///Functie de revenire la inceput
    void reset();

    ///Functie de avansare in nivel
    void advanceLevel();

    ///Getter pentru nivel
    int getLevel();

    ///Functie de adaugare la vector
    void addCard(const Card& c);

    ///Getter pentru vector
    const std::vector <Card>& getCards() const;

    ///Functie de incrementare a greselilor
    void incrementFails();

    ///Functie de resetare a greselilor
    void resetFails();

    ///Getter pentru greseli
    int getFails() const;

    ///Functie pentru stergerea vectorului de carti
    void deleteCards();

};

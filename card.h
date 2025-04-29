#pragma once
#include <string>

class Card
{
private:
    int value;  /// carti incepand cu 2 pana la 14 unde: 11 = J, 12 = Q, 13 = K, 14 = A
    std::string suit;    /// simbolurile sunt: "Hearts", "Diamonds", "Clubs", "Spades"

public:
    ///Constructor
    Card(const int value = 0, const std::string& suit = nullptr);

    ///Getter pentru culoare
    std::string getColor() const;

    ///Getter pentru valoare
    int getValue() const;

    ///Getter pentru simbol
    std::string getSuit() const;

    ///Functie pentru converirea cartii de joc in string
    virtual std::string toString() const;

};

#include <iostream>
#include <string>
#include "card.h"

///Constructor
Card :: Card (const int value, const std::string& suit)
{
    this -> value = value;
    this -> suit = suit;
}

///Getter pentru culoare
std::string Card :: getColor() const
{
    if (this -> suit == "Hearts" or this -> suit == "Diamonds")
        return "red";
    else
        return "black";
}

///Getter pentru valoare
int Card :: getValue() const
{
    return this -> value;
}

///Getter pentru simbol
std::string Card :: getSuit() const
{
    return this -> suit;
}

///Functie pentru converirea cartii de joc in string
std::string Card :: toString() const
{
    std::string result = "";

    switch (this -> value)
    {
    case 11:
        result = "J";
        break;
    case 12:
        result = "Q";
        break;
    case 13:
        result = "K";
        break;
    case 14:
        result = "A";
        break;
    default:
        result = std::to_string(this -> value);
    }

    if (this -> suit == "Hearts")
        result += " [Hearts]";
    else if (this -> suit == "Diamonds")
        result += " [Diamonds]";
    else if (this -> suit == "Clubs")
        result += " [Clubs]";
    else
        result += " [Spades]";

    return result;
}



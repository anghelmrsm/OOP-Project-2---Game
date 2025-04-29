#include "aiplayer.h"
#include <cstdlib>
#include <ctime>

///Constructor
AIPlayer::AIPlayer()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

///Decide pentru nivelul 1
std::string AIPlayer::decideColor() const
{
    return (std::rand() % 2 == 0) ? "red" : "black";
}

///Decide pentru nivelul 2
std::string AIPlayer::decideComparison() const
{
    return (std::rand() % 2 == 0) ? "mare" : "mic";
}

///Decide pentru nivelul 3
std::string AIPlayer::decideRange() const
{
    return (std::rand() % 2 == 0) ? "intre" : "in afara";
}

///Decide pentru nivelul 4
std::string AIPlayer::decideSuit() const
{
    const std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    return suits[std::rand() % 4];
}


#pragma once
#include "player.h"
#include <string>

class AIPlayer : public Player
{
public:
    ///Constructor
    AIPlayer();

    ///Decide pentru nivelul 1
    std::string decideColor() const;

    ///Decide pentru nivelul 2
    std::string decideComparison() const;

    ///Decide pentru nivelul 3
    std::string decideRange() const;

    ///Decide pentru nivelul 4
    std::string decideSuit() const;
};

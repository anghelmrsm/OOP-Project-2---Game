#include <iostream>
#include "game.h"

int main()
{
    Game g;
    int optiune = 0;

    do
    {
        std::cout << "\n=== Meniu Principal ===\n";
        std::cout << "1. Start joc\n";
        std::cout << "2. Iesire\n";
        std::cout << "Alege optiunea: ";
        std::cin >> optiune;

        if (optiune == 1)
        {
            g.start();
        }
        else if (optiune == 2)
        {
            std::cout << "La revedere!\n";
        }
        else
        {
            std::cout << "Optiune invalida! Incearca din nou.\n";
        }

    }
    while (optiune != 2);

    return 0;
}

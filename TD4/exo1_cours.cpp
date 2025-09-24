#include <iostream>
#include <ostream>

int tailleChar(const char* chaine)
{
    int taille = 0;
    while (chaine[taille] != '\0')
    {
        taille++;
    }
    return taille;
}

void exo1_cours_td4()
{
    std::cout << tailleChar("Bonjour");
}
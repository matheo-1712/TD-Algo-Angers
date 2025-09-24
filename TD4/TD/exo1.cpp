#include <iostream>
#include <ostream>

void nbChar(const char* chaine)
{
    int taille = 0;
    int nbLettre = 0, nbEspace = 0, nbChiffres = 0, nbSpecial = 0;
    while (chaine[taille] != '\0')
    {
        if (isalpha(chaine[taille]))
        {
            nbLettre++;
        } else if (isspace(chaine[taille]))
        {
            nbEspace++;
        } else if (isdigit(chaine[taille]))
        {
            nbChiffres++;
        } else
        {
            nbSpecial++;
        }
        taille++;
    }
    std::cout << "Entrée : " << chaine << std::endl;
    std::cout << "Nombre de lettres : " << nbLettre << std::endl;
    std::cout << "Nombre d'espaces : " << nbEspace << std::endl;
    std::cout << "Nombre de chiffres : " << nbChiffres << std::endl;
    std::cout << "Nombre de caractères spéciaux : " << nbSpecial << std::endl;
}

void ex1_td4()
{
    nbChar("Bonjour, j'ai 20 ans !");
}
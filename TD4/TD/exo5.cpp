#include <cctype>
#include <iostream>


void noEspace(const char* chaine)
{
    std::string chaineNoEspace;
    while (*chaine != '\0')
    {
        if (!isspace(*chaine))
        {
            chaineNoEspace += *chaine;
        }
        chaine++;
    }

    std::cout << chaineNoEspace << std::endl;
}

void ex5_td4()
{
    noEspace("Bonjour, j'ai 20 ans !");
}

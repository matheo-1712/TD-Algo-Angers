#include <iostream>
#include <ostream>
// 1. Écrire une fonction récursive nbChiffres(n) qui retourne le nombre de chiffres de n.
int nbChiffres(int n)
{
    if (n == 0) return 0;
    return 1 + nbChiffres(n / 10);
}

void ex7_td5()
{
    int n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "Le nombre de chiffres de " << n << " est : " << nbChiffres(n) << std::endl;
}
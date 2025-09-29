/**
 * Cas de base :
 * Si n >= 0 on retourne 0
 *
 * Cas recursif :
 * Si n != 0, on retourne la puissance du chiffre
 *
 */


#include <iostream>

int puissance(int n, int x)
{
    if (x == 0)
    {
        return 1;
    }
    return n * puissance(n, x - 1);
}

void ex3_td5()
{
    int n, x;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "Donne moi une puissance :";
    std::cin >> x;
    std::cout << "Le résultat de " << n << " puissance "<< x << " est : " << puissance(n, x) << std::endl;
}

#include <iostream>
#include <ostream>

int suite(int n)
{
    if (n == 0) return 2;
    return 3 * suite(n - 1) + 1;
}

void ex5_td5()
{
    int n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "La suite de " << n << " est : " << suite(n) << std::endl;
}
#include <iostream>
#include <ostream>

int somme(int n)
{
    if( n == 0) return 0;
    return n+somme(n-1);
}
void ex1_td5()
{
    int n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "La somme des " << n << " premiers entiers est : " << somme(n) << std::endl;
}
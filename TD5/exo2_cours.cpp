#include <iostream>

int pgcd(int a, int b)
{
    int r=a%b;
    if(r==0) return b;
    return pgcd(b,r);
}

void exo2_td5()
{
    int a,b;
    std::cout << "Entrez deux nombres entiers : ";
    std::cin >> a >> b;
    std::cout << "Le pgcd de " << a << " et " << b << " est : " << pgcd(a,b) << std::endl;
}
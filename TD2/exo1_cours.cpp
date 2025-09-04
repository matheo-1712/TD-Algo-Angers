#include <iostream>
int n;
int n1;
int n2;

int moyenne(float n, float n1, float n2)
{
    float sum = 0;
    sum = (n + n1 + n2) / 3;
    return sum;
}

void exemple1Td2()
{
    // On enregistre les 3 notes
    std::cout << "Merci d'écrire 3 notes" << std::endl ;
    std::cin >> n >> n1 >> n2;
    std::cout << moyenne(n, n1, n2) << std::endl;
}
#include <iostream>
int sommes_nombres_premiers;

int nombrePremierSomme(int nb){
    int nbMultiplicateur = 0;
    for (int i = 1; i <= nb ; i++) {
        if (nb % i == 0) {
            nbMultiplicateur += 1;
        }
    }
    if (nbMultiplicateur == 2) {
        return nb;
    }
    return 0;
}

void somme_premiers(unsigned n)
{
    for (int i = 0; i < n-1; i++)
    {
        sommes_nombres_premiers += nombrePremierSomme(i);
    }
    std::cout << "La somme des nombres premiers strictement inférieur à "<< n <<" <<est de : " <<sommes_nombres_premiers;
}

void ex2_td2()
{
    unsigned n;
    std::cout << "Entrez un nombre entier positif : ";
    std::cin >> n;
    somme_premiers(n);
}


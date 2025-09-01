#include <iostream>

int nb;

void nombrePremier(int nb){
    int nbMultiplicateur = 0;
    for (int i = 1; i <= nb ; i++) {
        if (nb % i == 0) {
            nbMultiplicateur += 1;
        }
    }
    if (nbMultiplicateur == 2) {
        std::cout << "C'est un nombre premier (normalement)";
    } else {
        std::cout << "C'est pas un nombre premier";
    }
}


void ex1() {
    int nb = 0;
    while (nb <= 1) {
        std::cout << "Un nombre svp (supérieur à 1) :";
        std::cin >> nb;
    }

    nombrePremier(nb);
}


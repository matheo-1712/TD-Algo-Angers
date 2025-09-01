#include <iostream>
/**
 * Nombre parfait
 */
int nbParfaitCount;
void nombreParfait(int nb) {
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            nbParfaitCount += i;
            if (nbParfaitCount == nb) {
                std::cout << nb << " est un nombre parfait";
                return;
            }
        }
    }
    std::cout << nb << " n'est pas parfait";
}

void ex2() {
    int nb;
    std::cout << "Un nombre svp :";
    std::cin >> nb;
    nombreParfait(nb);
}
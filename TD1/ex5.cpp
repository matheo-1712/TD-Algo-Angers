#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>

using namespace std;

void ex5() {
    int reponse = 0;

    std::srand(std::time(nullptr));
    int secret = std::rand() % 100 + 1;
    while (reponse == 0 || reponse != secret) {
        std::cout << "Merci de choisir un nombre entre 1 et 100" << std::endl;
        std::cin >> reponse;

        if (reponse == secret) {
            std::cout << "BRAVO C'EST LE BON CHIFFRE";
        } else if (reponse > 100 || reponse < 0) {
            std::cout << "Merci de choisir un chiffre valide";
        } else if (reponse > secret) {
            std::cout << "C'est moins";
        } else if (reponse < secret) {
            std::cout << "C'est plus";
        }
    }
}
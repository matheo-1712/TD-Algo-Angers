#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

void ex5() {
    int reponse = 0;

    std::srand(std::time(nullptr));
    int secret = std::rand() % 100 + 1;

    while (reponse != secret) {
        std::cout << "Merci de choisir un nombre entre 1 et 100" << std::endl;
        std::cin >> reponse;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Vide la ligne
            std::cout << "Entrée invalide. Veuillez entrer un nombre entier." << std::endl;
            continue;
        }

        if (reponse > 100 || reponse < 1) {
            std::cout << "Chiffre invalide. ";
        } else if (reponse > secret) {
            std::cout << "C'est moins " << std::endl;
        } else if (reponse < secret) {
            std::cout << "C'est plus " << std::endl;
        } else {
            std::cout << "BRAVO C'EST LE BON CHIFFRE !" << std::endl;
        }
    }
}

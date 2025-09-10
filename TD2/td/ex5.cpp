#include <iostream>
const int tailleGrille = 49;
typedef bool Grille[tailleGrille];
typedef unsigned Tirage[7];
bool nbComplementaire = false;

void initialiser(Grille g)
{
    // Mettre tout le contenu de la grille en faux
    for (int i = 0; i < tailleGrille; i++)
    {
        g[i] = false;
    }
}

bool nombre_valide(const Grille g)
{
    int nb_coches = 0;
    for (int i = 0; i < tailleGrille; i++)
    {
        if (g[i]) nb_coches++;
    }
    return nb_coches == 7;
}

bool tirage_valide(const Tirage t)
{
    // Vérifie si tous les numéros sont disctints dans le tirage
    for ( int i = 0; i < 7; i++ )
    {
        if (t[i] > tailleGrille || t[i] < 1 || t[i] == t[i+1])
        {
            return false;
        }
        if (t[i] == t[i+1]) {}
    }
    return true;
}

unsigned calculer_gains(const Grille g, const Tirage t)
{
    unsigned nbGains = 0;
    // Compter les bons numéros (hors complémentaire)
    for (int i = 0; i < 6; i++) {
        if (g[t[i] - 1]) nbGains++;
    }
    // Vérifier le complémentaire
    bool nbComplementaire = g[t[6] - 1];

    unsigned gain = 0;
    switch (nbGains) {
    case 3: gain = 10; break;
    case 4: gain = 100; break;
    case 5: gain = 1000; break;
    case 6: gain = 100000; break;
    default: gain = 0; break;
    }
    if (gain > 0 && nbComplementaire) gain *= 2;
    return gain;
}

void jouer_loto()
{
    Grille g;
    initialiser(g);

    std::cout << "Merci de cocher 7 numéros entre 1 et 49 pour votre grille :" << std::endl;
    for (int i = 0; i < 7; i++) {
        int num;
        std::cin >> num;
        if (num < 1 || num > 49 || g[num - 1]) {
            std::cout << "Numéro invalide ou déjà coché, recommencez." << std::endl;
            i--;
        } else {
            g[num - 1] = true;
        }
    }

    if (!nombre_valide(g)) {
        std::cout << "La grille n'est pas valide" << std::endl;
        return;
    }

    Tirage t;
    std::cout << "Merci de saisir le tirage (7 numéros entre 1 et 49) :" << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cin >> t[i];
    }

    if (!tirage_valide(t)) {
        std::cout << "Le tirage n'est pas valide" << std::endl;
        return;
    }
    std::cout << "Votre gain : " << calculer_gains(g, t) << std::endl;
}

void ex5_td2()
{
    jouer_loto();
}



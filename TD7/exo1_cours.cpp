#include <iostream>
#include <ostream>

struct TabDyn
{
    int *tab = nullptr;
    unsigned taille = 0, capacite = 0;

    void ajouter(int x) {
        if (taille == capacite) {
            //Si le tableau est pleins, on en crée un nouveau plus grand
            capacite=2*(capacite+1);
            int* tmp = new int[capacite];
            // copier les anciennes valeurs si le tableau existait déjà
            for (unsigned i = 0; i < taille; ++i)
                tmp[i] = tab[i];
            delete[] tab; // libérer l'ancienne mémoire
            tab = tmp;
        }
        tab[taille] = x;
        ++taille;
    }

    void afficher()
    {
        if (tab != nullptr)
        {
            for (unsigned i = 0; i < taille; i++)
            {

                std::cout << tab[i]<<std::endl;
            }
        }
    }
};

void exo1_td7()
{
    TabDyn t;
    t.ajouter(1);
    t.ajouter(2);
    t.afficher();
}

#include <iostream>

const int notesSize2 = 4;
float notes2[notesSize2];

int notesMax = 0;
int notesMin = 0;

// Oui c'est pour avoir le max
void min_max(const float notesTab[], const int taille, float& max, float& min)
{
    max = notesTab[0];
    min = notesTab[0];
    for (int i = 0; i < taille; i++)
    {
        if (notesTab[i] > max){max = notesTab[i];}
        if (notesTab[i] < min){min = notesTab[i];}
    }
}

void exemple3Td2()
{
    std::cout << "Merci d'écrire " << notesSize2 <<" notes" << std::endl;
    for (int i = 0; i < notesSize2; i++)
    {
        std::cin >> notes2[i];
    }

    float max, min;
    min_max(notes2, notesSize2, max, min );

    // On renvoie le tableau pour savoir le minimum
    std::cout << "Le chiffre le plus petit du tableau est : "<< min << std::endl;

    // On renvoie le tableau pour savoir le maximum
    std::cout << "Le chiffre le plus grand du tableau est : "<< max << std::endl;

}

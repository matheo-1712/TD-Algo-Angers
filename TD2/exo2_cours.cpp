#include <iostream>

const int notesSize = 16;
float notes[notesSize];

int moyenne(float notesTab[], int taille)
{
    float sum = 0;
    for (int i = 0; i < taille; i++)
    {
        sum += notesTab[i];
    }
    int moyenne = sum / taille;
    return moyenne;
}

void exemple2Td2()
{
    std::cout << "Merci d'écrire 16 notes" << std::endl;
    for (int i = 0; i < notesSize; i++)
    {
        std::cin >> notes[i];
    }
    float moyenneValue = moyenne(notes, notesSize);

    std::cout << "La moyenne est de : " << moyenneValue << std::endl;

    for (int i = 0; i < notesSize; i++)
    {
        if (notes[i] > moyenneValue)
        {
            std::cout << notes[i] << " est supérieur à la moyenne" << std::endl;
        }
    }
}

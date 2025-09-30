// Après la partition, les éléments à gauche de 5 sont plus petits, ceux à droite plus grands. On
// applique ensuite récursivement l’algorithme aux deux parties.
// Travail demandé :
// 1. Écrire une fonction int partition(int T[], int debut, int fin) qui réorganise le
// tableau T autour d’un pivot (par exemple choisi comme le dernier élément) et renvoie la
// position finale du pivot.
// Rôle des paramètres :
// — debut : l’indice du premier élément de la portion de tableau que l’on veut trier.
// — fin : l’indice du dernier élément de la portion de tableau que l’on veut trier.
// Par exemple, appeler partition(T, 0, 6) partitionne l’ensemble du tableau T de taill

#include <iostream>
#include <ostream>

int partition(int T[], int debut, int fin)
{
    int pivot = T[fin];
    int i = debut - 1;

    for (int j = debut; j <= fin - 1; j++)
    {
        if (T[j] <= pivot)
        {
            i++;
            int temp = T[i];
            T[i] = T[j];
            T[j] = temp;
        }
    }

    int temp = T[i + 1];
    T[i + 1] = T[fin];
    T[fin] = temp;

    return i + 1; // Retourne la position du pivot
}

void quickSort(int T[], int debut, int fin)
{
    if (debut < fin)
    {
        // Obtient la position du pivot après partition
        int pi = partition(T, debut, fin);

        // Trie récursivement les éléments avant et après la partition
        quickSort(T, debut, pi - 1);
        quickSort(T, pi + 1, fin);

        // Affiche le tableau trié
        for (int i = 0; i < fin; i++)
        {
            std::cout << T[i] << " ";
        }
        std::cout << std::endl;
    }
}

void ex1_td6()
{
    int T[] = {8, 2, 7, 5, 1, 9, 3};
    quickSort(T, 0, 6);
}

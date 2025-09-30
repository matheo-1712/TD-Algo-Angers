#include <iostream>
// 1. Écrire une fonction récursive rech(T, n, x) qui teste si l’élément x est présent.
void rech(int T[], int n, int x)
{
    if (n == 0) return;
    if (T[n-1] == x)
    {
        std::cout << T[n-1] << " est dans ce tableau" << std::endl;
    } else
    {
        rech(T, n-1, x);
    }
}

void ex8_td5()
{
    int T[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rech(T, 10, 5);
}

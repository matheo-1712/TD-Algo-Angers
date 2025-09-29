#include <iostream>
#include <ostream>
/*
 * 1. Écrire une fonction récursive sum(T, n) qui retourne la somme des n premiers éléments
 * du tableau.
*/
int sum(int T[], int n)
{
    if (n == 0) return 0;
    return T[n-1] + sum(T, n-1);
}

// 2. Écrire max(T, n) qui retourne le maximum des n premiers éléments (supposer n ≥ 1).
int max(int T[], int n)
{
    if (n == 1) return T[0];
    int maxRest = max(T, n - 1);
    if (T[n - 1] > maxRest)
        return T[n - 1];
    return maxRest;
}

void ex6_td5()
{
    int T[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << sum(T, 10) << std::endl;
    std::cout << max(T, 10) << std::endl;
}
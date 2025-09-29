/*
 *
 * Donner une définition récursive de la fonction sommeChiffres(n) qui retourne la somme
 * des chiffres de n. Indication : utiliser le dernier chiffre (reste de la division par 10) et
 * l’appel récursif sur le quotient.
 *
 * Cas de base :
 * Si n = 0, alors la somme des chiffres est 0.
 *
 * Cas récursif :
 * Pour n > 0, la somme des chiffres de n est égale au dernier chiffre
 * (le reste de la division de n par 10) plus la somme des chiffres du quotient
 * (le résultat de la division entière de n par 10).
 */

#include <iostream>

int puissance(int n){
    if (n == 0) return 0;
    return (n % 10) + puissance(n / 10);
}

void ex2_td5()
{
    int n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "La somme des chiffres de " << n << " est : " << puissance(n) << std::endl;
}

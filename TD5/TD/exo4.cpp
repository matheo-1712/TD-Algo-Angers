#include <iostream>

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

void ex4_td5(){
    int n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;
    std::cout << "Le résultat de la suite de fibonacci de " << n << " est : " << fib(n) << std::endl;
}
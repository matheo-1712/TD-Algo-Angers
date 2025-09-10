#include <iostream>
using namespace std;

unsigned int factorielle(unsigned n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorielle(n - 1);
}

int ex1_td2()
{
    unsigned n;
    cout << "Entrez un nombre entier positif : ";
    cin >> n;
    cout << "La factorielle de " << n << " est " << factorielle(n) << endl;
    return 0;
}



int puissance(int a, unsigned n)
{
    int resultat = 1;
    for (unsigned i = 0; i < n; i++)
    {
        resultat *= a;
    }
    return resultat;
}

void ex3_td2()
{
    std::cout << puissance(3, 0);
}

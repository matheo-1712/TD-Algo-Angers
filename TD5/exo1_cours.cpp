#include <iostream>
#include <ostream>

int somme(int n)
{
    if( n == 0) return 0;
    return n+somme(n-1);
}
void ex1cours_td5()
{

}
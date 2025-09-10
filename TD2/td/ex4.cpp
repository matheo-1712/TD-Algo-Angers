#include <iostream>
#include <ostream>
int tmp;
void trier3(int &a, int &b, int &c)
{
    if (a > b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
   if (b > c)
   {
       tmp = c;
       c = b;
       b = tmp;
   }
    if (a > c)
    {
        tmp = c;
        c = a;
        a = tmp;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

void ex4_td2()
{
    int
    a = 7,
    b = 2,
    c = 5;

    std::cout << a << " " << b << " " << c << std::endl;
    trier3(a, b, c);
}
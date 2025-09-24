#include <cstring>
#include <iostream>
#include <ostream>

bool palindrome(const char* chaine)
{
    int length = strlen(chaine);
    for (int i = 0; i < length / 2; i++)
    {
        if (chaine[i] != chaine[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void ex2_td4()
{
    if (palindrome("radar"))
    {
        std::cout << "Le mot est un palindrome" << std::endl;
    }
    else
    {
        std::cout << "Le mot n'est pas un palindrome" << std::endl;
    }
}
#include <cstring>
#include <iostream>
#include <ostream>

std::string inverserChaine(std::string s)
{
int length = strlen(s.c_str());
    std::string r = s;
    for (int i = 0; i < length / 2; i++)
    {
        char temp = r[i];
        r[i] = r[length - 1 - i];
        r[length - 1 - i] = temp;
    }
    return r;
}

void ex3_td4()
{
    std::cout << inverserChaine("Bonjour") << std::endl;
}
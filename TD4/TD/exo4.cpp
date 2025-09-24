#include <iostream>
#include <ostream>
#include <string>

std::string concact(std::string s1, std::string s2)
{
    std::string r;

    for (int i = 0; i < s1.length() + s2.length(); i++)
    {
        if (i<s1.length())
        {
            r.push_back(s1[i]);
        } else {
            r.push_back(s2[i-s1.length()]);
        }
    }
    return r;
}

void ex4_td4()
{
    std::cout << concact("Bonjour", "kkkkk");
}

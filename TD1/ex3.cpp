#include <iostream>
int ex3() {
    int n;
    std::cout << "Entrez un nombre entier" << std::endl;
    std::cin >> n;
    int m=n%3;
    if(m==0){
        std::cout << "Le nombre est divisble par 3." << std::endl;
    }
    else if(m==1){
        std::cout << "Le nombre est congru à 1 modulo 3." << std::endl;
    }
    else {
        std::cout << "Le nombre est congru à 2 modulo 3." << std::endl;
    }
    return 0;
}
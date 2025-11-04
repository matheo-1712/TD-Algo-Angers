#include <iostream>
using namespace std;
int ex1_td7() {
    int x = 10;
    cout << "Avant: x = " << x << endl;
    int *p = &x ;
    /* TODO: modifier x via *p (par ex. x *= 3) */
    *p *= 3;
    cout << "Apres: x = " << x << endl;
    // Expliquez le role de * dans ce contexte.
    /*
     * Le rôle de x dans ce contexte est de pointer vers la
     * zone mémoire de x et de lui mettre ses nouvelles données
     */
    return 0;
}
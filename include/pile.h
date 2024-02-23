#ifndef PILE_H
#define PILE_H
#include <iostream>
#include <vector>

using namespace std;

class pile {

    std::vector <int> Pv ;
public :
    pile () ;
    pile (const pile & ) ;
    void Empiler (int) ;
    void Depiler () ;
    bool pileVide () ;
    void afficherPile () ;
    int sommet () ;
    void inverser();


};


#endif // PILE_H

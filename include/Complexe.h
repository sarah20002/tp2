#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <iostream>
using namespace std;
class Complexe
{
      float imaginaire , reelle ;

public :

    Complexe () ;
    Complexe(float , float  ) ;
    float getReel () {return reelle ;}
    float getImaginaire () {return imaginaire ; }
    void addionnerR (float) ;
    void multiplierR (float) ;
    void multiplierI () ;
    void additionnerC (Complexe , Complexe ) ;
    void afficherC () ;
};

#endif // COMPLEXE_H

#include <C:\Users\sarra\Desktop\enicar-university\Nouveau dossier\tp2\include\Complexe.h>
#include <iostream>
using namespace std;

Complexe::Complexe()
 {  }
Complexe::Complexe(float reelle , float imaginaire ) {
    this->reelle=reelle;
    this->imaginaire=imaginaire;
}


void Complexe::addionnerR (float reelle) {
    this->reelle += reelle ;
}

void Complexe::multiplierR (float reelle) {
    this->reelle *= reelle ;
    this->imaginaire *= reelle ;
}

void Complexe::multiplierI () {
    float x ;
    x=reelle ;
    reelle = - imaginaire ;
    imaginaire = x ;

}

void Complexe::additionnerC (Complexe A , Complexe B ) {
    this->reelle = A.getReel() + B.getReel() ;
    this->imaginaire = A.getImaginaire()+ B.getImaginaire() ;

}

void Complexe::afficherC () {
    cout<<"  "<<this->reelle<<" + "<<this->imaginaire<<"i "<<endl ;
}


int main()
{
    Complexe A(1,2) , B(3,-9) , C ;

    cout<<endl<<"  afficherC : A " <<endl ;
    A.afficherC() ;
    A.addionnerR(4);
    cout<<endl<<"  addionnerR : (4) " <<endl ;
    A.afficherC() ;
    A.multiplierR(2);
    cout<<endl<<"  multiplierR : (2) " <<endl ;
    A.afficherC();
    A.multiplierI();
    cout<<endl<<"  multiplierI " <<endl ;
    A.afficherC() ;
    C.additionnerC(A,B);
    cout<<endl<<"  additionner A et B  " <<endl ;
    C.afficherC();







    return 0;
}


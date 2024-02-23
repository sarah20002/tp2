#include "abonne.h"
#include<iostream>
#include<string.h>
using namespace std ;
abonne::abonne ()
{

};

void abonne::saisir(){
    cout<<"Saisir le nom ";
    cin>>nom;
    cout<<"Saisir le prenom ";
    cin>>prenom;
    cout<<"Saisir le numero d'appel ";
    cin>>num;
    cout<<"Saisir le CIN ";
    cin>>CIN;
    cout<<"Saisir le solde ";
    cin>>solde;
}


void abonne::recharger (double x) {
    solde += x ;
}

void abonne::afficher(){
    cout<<"Nom : "<<nom<<endl;
    cout<<"Prenom : "<<prenom<<endl;
    cout<<"Numero appel : "<<num<<endl;
    cout<<"CIN : "<<CIN<<endl;
    cout<<"Solde : "<<solde<<endl;
}


bool abonne::consommer (int nb_seconde  , double prix_min  ) {

    if ( (nb_seconde/60.0)*prix_min <= solde ) {
        solde -= (nb_seconde/60.0)*prix_min ;
        return true ;
    }
    else
        return false ;

}

int main()

{
    double pm;
    int s ;
    bool test ;
    abonne A ;
    A.saisir() ;
    A.afficher() ;
    cout<<endl<< "Combien vous voulez recharger en dt : " ;
    cin>> pm ;
    A.recharger(pm) ;
    A.afficher() ;
    cout<<endl<< "Combien de secondes vous voulez parler : " ;
    cin>> s ;
    cout<<endl ;
    cout<<endl<< "Veulliez saisir le prix de la minute en dt : " ;
    cin>> pm ;
    cout<<endl ;
    test = A.consommer (s,pm);
    if (test == true) {
            A.afficher() ;
    }
    else cout <<endl<<" Solde insufisant " ;
    return 0;
}

#include "temps.h"
//#include <C:\Users\sarra\Desktop\enicar-university\Nouveau dossier\tp2\include\temps.h>
#include<string.h>
#include <iostream>
using namespace std ;




temps::temps(int heure,int minute, int seconde){
    this->heure = heure;
    this->minute = minute;
    this->seconde = seconde;
}


void temps::affiche_anglaise(){
    if (heure>12)
        {
         heure-=12;
        cout<<heure<<":"<<minute<<":"<<seconde<<" pm";}
        else
             cout<<heure<<":"<<minute<<":"<<seconde<<" am";

}




void temps::affiche_francaise(){
        cout<<heure<<":"<<minute<<":"<<seconde<<" pm"<<endl;
}

int temps::inferieur (temps & T)
{
    if (this->heure<T.heure)
        return 1;
    else if (this->heure>T.heure)
        return -1 ;
    else
    {
        if (minute <T.minute )
            return 1 ;
        else if (minute >T.minute )
            return -1;
        else
        {
            if (seconde<T.seconde )
                return 1;
            else if (seconde>T.seconde )
                return -1 ;
            else return 0 ;
        }
    }





}





 void temps::ajuster()
 {
     cout<<"donner heure" ;
     cin>>this->heure;
     cout<<"donner minute" ;
     cin>>this->minute;
     cout<<"donner seconde" ;
     cin>>this->seconde;

 }


 int main()
{
    temps C1;
    temps C2;
    char choix ;
    C1.ajuster();
    C2.ajuster();

    cout<<"qu elles heures voulez vous A=anglais et F=francaise " ;
    cin >>choix ;

    switch (choix){
        case 'A': cout<<"Affichage heure anglaise "<<endl;
                C1.affiche_anglaise();
                C2.affiche_anglaise();
                break;
        case 'F': cout<<"Affichage heure francaise "<<endl;
                C1.affiche_francaise();
                C2.affiche_francaise();
                break;
        default: cout<<"Choix incorrect"<<endl;
    }
    if (C1.inferieur(C2))
        cout<<"C1 est inferieur a C2";
    else
        cout<<"C2 est inf�rieur a C1";
    return 0;
}




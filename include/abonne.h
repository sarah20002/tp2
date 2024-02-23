#ifndef ABONNE_H
#define ABONNE_H
#include<iostream>
#include<string.h>
using namespace std ;



class abonne
{
string nom ,prenom ;
int num , CIN ;
float solde ;
public :
abonne ();
void saisir ();
void afficher ();
void recharger (double);
bool consommer (int nb_seconde=12  , double prix_min=0.18);};







#endif // ABONNE_H

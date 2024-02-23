#include<C:\Users\sarra\Desktop\enicar-university\Nouveau dossier\tp2\include\pile.h>
#include <iostream>
#include <vector>
using namespace std;

pile::pile()
{

};




void pile::Empiler(int x)
 {
     Pv.push_back(x) ;

 }

 bool pile::pileVide ()
 {
     return Pv.empty();
 }


 void pile::Depiler() {
  if (!pileVide())
    Pv.pop_back();
  else cout<<"la pile est vide ";
}


  void pile::afficherPile ()
  {
       for (unsigned i=0 ; i<this->Pv.size() ; i ++ )
         cout<<(Pv[i])<<endl;

  }




  int pile::sommet () {
   if (!pileVide())
    return Pv.back() ;
}

void pile::inverser (){
    pile p2 ;
    while (pileVide()==false) {
        p2.Empiler(sommet());
        Depiler();
    }

    *this=p2;

}




int main()
{
    pile p1 ;
    int test ;
    int E ;
    test = 1 ;
 while (test==1){
        cout<<" Veulliez saisir l'entier a ajouter  " ;
        cin>>E ;
        cout<< "si vous avez termine taper false:" <<endl ;
        cin>>test ;
        p1.Empiler(E);
        if  (test==0 ) break ;

    }
    cout<<"  avant inversion "<<endl ;
    p1.afficherPile();
    p1.inverser();
    cout<<"  apres inversion "<<endl ;
    p1.afficherPile() ;





    return 0;
}

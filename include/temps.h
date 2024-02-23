#ifndef TEMPS_H
#define TEMPS_H


class temps
{
    private:
        int heure;
        int minute;
        int seconde;

    public:

        temps(int heure=0,int minute=0,int seconde=0);
        void affiche_anglaise();
        void affiche_francaise();
        int inferieur(temps &);
        void ajuster();
};

#endif // TEMPS_H

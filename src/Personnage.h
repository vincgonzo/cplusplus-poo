#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <iostream>
#include <string>
#include "Arme.h" //Ne PAS oublier d'inclure Arme.h pour en avoir la définition

class Personnage
{
    public:

    Personnage();
    Personnage(Personnage const& personnageToCopy);
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

    bool estVivant() const;
    int PersonnageVie() const;

    Personnage& operator=(Personnage const& personnageToCopy);

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme; //Notre Personnage possède une Arme
};


#endif // PERSONNAGES_H_INCLUDED

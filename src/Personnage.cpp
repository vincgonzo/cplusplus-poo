#include "Personnage.h"

using namespace std;

// constructor ================
Personnage::Personnage(): m_vie(100), m_mana(100), m_arme(0)
{
    m_arme = new Arme();
}

// copy constructor with specification for Arme object
Personnage::Personnage(Personnage const& personnageToCopy): m_vie(personnageToCopy.m_vie), m_mana(personnageToCopy.m_mana), m_arme(0)
{
    m_arme = new Arme(*(personnageToCopy.m_arme));
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(0)
{
    m_arme = new Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
    delete m_arme;
}

// class Methods =================
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enl�ve le nombre de d�g�ts re�us � la vie du personnage

    if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
    {
        m_vie = 0; //On met la vie � 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme->getDegats());
    //On inflige � la cible les d�g�ts que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de d�passer 100 de vie
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

int Personnage::PersonnageVie() const
{
    return m_vie;
}

// operator ==================

Personnage& Personnage::operator=(Personnage const& personnageToCopy)
{
    if(this != &personnageToCopy)
    //On v�rifie que l'objet n'est pas le m�me que celui re�u en argument
    {
        m_vie = personnageToCopy.m_vie; //On copie tous les champs
        m_mana = personnageToCopy.m_mana;
	delete m_arme;
        m_arme = new Arme(*(personnageToCopy.m_arme));
    }
    return *this; //On renvoie l'objet lui-m�me
}

#include <iostream>

#include "src/Personnage.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Personnage david, goliath("Hache de ouf", 20);
    //Cr�ation de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath r�attaque david
    cout << "Niveau de vie G : " << goliath.PersonnageVie() << endl;
    cout << "Niveau de vie D : " << david.PersonnageVie() << endl;
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);

    cout << "Niveau de vie G : " << goliath.PersonnageVie() << endl;
    cout << "Niveau de vie D : " << david.PersonnageVie() << endl;


    return 0;
}

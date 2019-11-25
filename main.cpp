#include <iostream>

#include "src/Personnage.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Personnage david, goliath("Hache de ouf", 20);
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    cout << "Niveau de vie G : " << goliath.PersonnageVie() << endl;
    cout << "Niveau de vie D : " << david.PersonnageVie() << endl;
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    cout << "Niveau de vie G : " << goliath.PersonnageVie() << endl;
    cout << "Niveau de vie D : " << david.PersonnageVie() << endl;


    return 0;
}

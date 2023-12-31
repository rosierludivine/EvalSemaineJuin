#include <iostream>
#include "Boxeur.h"
#include "Combat.h"

using namespace Boxeurs; 
using namespace std; 

int main()
{
    cout << " ---> DEBUT " << endl << endl;

    //Statique
    cout << " Boxeur en automatique " << endl;
    Boxeur box_1("Caroline", 75);
    cout << "Boxeur 1: " << box_1.GetNom() << ", et a " << box_1.GetPoids() << "kg." << " Il se trouve à: " << &box_1 << endl;
    cout << endl << endl;

    // en dynamique 
    cout << " Boxeur en dynamique " << endl;
    Boxeur* box_2; 
    box_2 = new Boxeur("Charline", 100);
    cout << "Boxeur 2: " << box_2->GetNom() << ", et a " << box_2->GetPoids() << "kg." << " Il se trouve à: " << &box_2 << endl;
    cout << endl << endl;

    //Création d'un combat automatique
    Combat comb1("Comb_1(1/8)");
    cout << "Combat de niveau "<< comb1.GetNiveau() << "sont adresse" << &comb1<< endl;
    cout << "ou est le boxeur 2" << comb1.GetCoinBleu() << endl;
    cout << endl << endl;


    delete box_2; 

};
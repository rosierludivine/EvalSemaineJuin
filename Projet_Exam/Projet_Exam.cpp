#include <iostream>
#include "Boxeur.h"

using namespace Boxeurs; 
using namespace std; 

int main()
{
    cout << " ---> DEBUT " << endl << endl;

    //Statique
    Boxeur box_1("Caroline", 75);
    cout << "Boxeur 1: " << box_1.GetNom() << ", et a " << box_1.GetPoids() << "kg." << " Il se trouve à: " << &box_1 << endl;
    


};
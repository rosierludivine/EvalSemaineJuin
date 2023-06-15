#include <iostream>
#include "Boxeur.h"

using namespace Boxeurs; 
using namespace std; 

int main()
{
    cout << " ---> DEBUT " << endl << endl;

    //Statique
    Boxeur box_1("Caroline ", 55.9);
    cout << " Premier Boxeur " << box_1.GetNom() << endl; 

};
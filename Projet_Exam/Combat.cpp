#include "Combat.h"
#include <iostream>
#include "Boxeur.h"

using namespace std;


Boxeurs::Combat::Combat(string niveau)
{
	this->niveau = niveau; 
}

string Boxeurs::Combat::GetNiveau()
{
	return this->niveau;
}

Boxeurs::Combat::~Combat()
{
	cout << " le Combat " << this->GetNiveau() << " a ete effacer" << endl;

}

















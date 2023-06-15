#include "Combat.h"
#include <iostream>

using namespace std;


Boxeurs::Combat::Combat(string niveau)
{
	this->niveau = niveau; 
}

string Boxeurs::Combat::GetNiveau()
{
	this->niveau = niveau; 
	return this->niveau;
}

Boxeurs::Combat::~Combat()
{
	cout << " le Combat " << this->GetNiveau() << " a ete effacer" << endl;

}

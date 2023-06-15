#include "Combat.h"

Boxeurs::Combat::Combat(string niveau)
{
	this->niveau = niveau; 
}

string Boxeurs::Combat::GetNiveau()
{
	this->niveau = niveau; 
	return this->niveau;
}

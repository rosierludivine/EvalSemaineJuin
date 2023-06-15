#define TRACE

#include "Boxeur.h"
#include <iostream>

using namespace std; 


//Constructeur 
Boxeurs::Boxeur::Boxeur(string nom, double poids)
{
	this->nom = nom; 
	this->poids = poids; 

}

string Boxeurs::Boxeur::GetNom()
{
	return this->nom;
}

double Boxeurs::Boxeur::GetPoids()
{
	return this->poids;
}






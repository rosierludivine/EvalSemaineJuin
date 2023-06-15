#define TRACE

#include "Boxeur.h"
#include <iostream>

using namespace std; 


//Constructeur 
Boxeurs::Boxeur::Boxeur(string nom, double poids)
{
	this->nom = nom; 
	this->poids = poids; 
#ifdef TRACE
	std::cout << "=> Boxeur est " << this->nom << " fait  " << this->poids << " de " << this << std::endl;
#endif

}


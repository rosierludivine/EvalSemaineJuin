#pragma once
#include <string>

using namespace std; 

namespace Boxeurs {
	class Boxeur
	{
	private: 
		string nom ;
		double poids ; 
	
	public: 
		Boxeur(string nom, double poids);
		~Boxeur();
		string GetNom(); 
		double GetPoids();
		double SetPoids();
		

	};
}



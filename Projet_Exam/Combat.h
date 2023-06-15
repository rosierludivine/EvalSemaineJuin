#pragma once
#include <string>
#include "Boxeur.h"

using namespace std;

namespace Boxeurs {
	class Combat
	{
	private:
		string niveau; 
		Boxeur* coinBleu = nullptr;
		Boxeur* coinRouge = nullptr;

	public:
		Combat(string niveau); 
		string GetNiveau();
		~Combat();
		
		Boxeurs::Boxeur* GetCoinBleu();
		Boxeurs::Boxeur* GetCoinRouge();
		void SetCoinBleu(Boxeur*);
		void SetCoinRouge(Boxeur*);//Asssociation 
	
	};
}



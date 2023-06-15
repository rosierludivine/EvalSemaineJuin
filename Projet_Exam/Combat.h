#pragma once
#include <string>
#include "Boxeur.h"

using namespace std;

namespace Boxeurs {
	class Combat
	{
	private:
		string niveau; 

	public:
		Combat(string niveau); 
		string GetNiveau();
		~Combat();
		

		Combat* GetCoinBleu();
	
	};
}



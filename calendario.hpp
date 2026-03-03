#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

class Calendario{
	private:
		std::string ArrayImpegni[10];
	public:
		int giorno,mese,anno;
		
		Calendario(int giorno, int mese, int anno){
			this->giorno = giorno;
			this->mese = mese;
			this->anno = anno;
		}
		
		Calendario(){
			giorno = 1;
			mese = 1;
			anno = 2026;
		}
		
		std::string getImpegni(int numeroimpegno){
			return ArrayImpegni[numeroimpegno];
		}
		
		std::string setImpegni(int numeroimpegno){
			std::cout << "Inserisci Impegno: ";
			std::cin >> ArrayImpegni[numeroimpegno];
		}
};



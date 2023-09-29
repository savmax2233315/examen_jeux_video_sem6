#include <iostream>
#include <ctime>
#include "Quete.h"
#include "Aventurier.h"
#include "FactoryQuete.h"
using std::cout;
using std::endl;



int main()
{
	srand(time(NULL));
	Aventurier* aventurier = new Aventurier();
	for (int i = 0; i < 12; i++)
	{
		Quete* quete = FactoryQuete::getRandomQuete("tuer le monstre");
		if (quete->getNivMin() <= aventurier->getNiv())
		{
			aventurier->ajouterQuete(quete);
		}
		else
		{
			delete quete;
		}
	}
	cout << "Niveau de l'aventurier : " << std::to_string(aventurier->getNiv()) << "\n\n";
	aventurier->afficherQuete();
	delete aventurier;
	aventurier = 0;
}



#include "FactoryQuete.h"

int FactoryQuete::genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
Quete* FactoryQuete::getRandomQuete(string nom)
{
	Quete::Difficulte difficulte;
	int nivMin;
	int rand = genererNb(1, 21);
	int recompense;
	int exp;
	if (rand <= 2)
	{
		difficulte = Quete::Difficile;
		nivMin = genererNb(25, 100);
		recompense = genererNb(50, (nivMin + 20) * 2) * 100;
		exp = genererNb(40, 140) * 100;
	}
	else if (rand <= 5)
	{
		difficulte = Quete::Moyen;
		nivMin = genererNb(10, 26);
		recompense = genererNb(10, 50) * 100;
		exp = genererNb(20, 40) * 100;
	}
	else
	{
		difficulte = Quete::Facile;
		nivMin = genererNb(1, 11);
		recompense = genererNb(1, 10) * 100;
		exp = genererNb(1, 20) * 100;
	}

	return new Quete(nom, difficulte, nivMin, recompense, exp);
}
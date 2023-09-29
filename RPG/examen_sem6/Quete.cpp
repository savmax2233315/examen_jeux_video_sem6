#include "Quete.h"

Quete::Quete(string nom_, Difficulte nivDifficulte_, int nivMin_, int recompenseOr_, int expRecu_)
{
	nom = nom_;
	nivDifficulte = nivDifficulte_;
	nivMin = nivMin_;
	recompenseOr = recompenseOr_;
	expRecu = expRecu_;
}

Quete::~Quete()
{

}

Quete::Difficulte Quete::getDifficulte()
{
	return nivDifficulte;
}
int Quete::getNivMin()
{
	return nivMin;
}
int Quete::getRecompense()
{
	return recompenseOr;
}
int Quete::getExp()
{
	return expRecu;
}
inline const string ToString(Quete::Difficulte difficulte)
{
	switch (difficulte)
	{
	case 0: return "Facile";
	case 1: return "Moyenne";
	case 2: return "Difficile";
	default: return "[Unknown Difficulte]";
	}
}

string Quete::to_string()
{

	string info = nom + "\nDifficulte : " + ToString(nivDifficulte) + "\nNiveau Minimum : " + std::to_string(nivMin) + "\nRecompense : \n" + std::to_string(recompenseOr )+ " Or\n" + std::to_string(expRecu) + " exp\n";
	return info;
}
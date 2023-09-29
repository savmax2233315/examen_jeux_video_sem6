#pragma once
#include <string>

using std::string;
class Quete
{
public :
	enum Difficulte
	{
		Facile = 0,
		Moyen = 1,
		Difficile = 2,
	};
private:
	string nom;

	Difficulte nivDifficulte;
	int nivMin;
	int recompenseOr;
	int expRecu;

public:
	Quete(string nom, Difficulte nivDifficulte, int nivMax, int recompenseOr, int expRecu);
	~Quete();
	Difficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	string to_string();

};


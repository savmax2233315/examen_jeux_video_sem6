#pragma once
#include <vector>
#include "Quete.h"
#include <iostream>
#include "FactoryQuete.h"
using std::vector;
class Aventurier
{
private:
	int niveau;
	vector<Quete*> tabQuete;
public:
	Aventurier();
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();
};


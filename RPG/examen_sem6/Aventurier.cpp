#include "Aventurier.h"



Aventurier::Aventurier()
{
	niveau = FactoryQuete::genererNb(1,35);
}
Aventurier::~Aventurier()
{
	vector<Quete*>::iterator it;
	for (it = tabQuete.begin(); it < tabQuete.end(); it++)
	{
		delete (*it);
		*it = 0;
	}
}

void Aventurier::afficherQuete()
{
	vector<Quete*>::iterator it;
	for (it = tabQuete.begin(); it < tabQuete.end(); it++)
	{
		std::cout << (*it)->to_string() << std::endl;
	}
}
void Aventurier::ajouterQuete(Quete* quete)
{
	tabQuete.push_back(quete);
}
int Aventurier::getNiv()
{
	return niveau;
}

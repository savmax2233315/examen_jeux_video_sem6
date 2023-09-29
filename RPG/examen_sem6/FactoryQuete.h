#pragma once
#include "Quete.h"
#include <ctime>
static class FactoryQuete
{
public:
	static Quete* getRandomQuete(string);
	static int genererNb(int min, int max);
};




#ifndef JIOFACTORY_H
#define JIOFACTORY_H

#ifdef JIOFACTORY_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include"Jio.h"
#include"..\SIM\Sim.h"

class DEFAULT FACTORY
{
public:
	FACTORY();
	~FACTORY();
	static Sim* getinstance();
	
};

#endif // !JIOFACTORY_H

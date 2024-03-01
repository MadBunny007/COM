#ifndef AirtelFACTORY_H
#define AirtelFACTORY_H

#ifdef AirtelFACTORY_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include"Airtel.h"
#include"..\SIM\Sim.h"
#include"..\SIM\IMobile1.h"
#include"..\SIM\ICalculator1.h"

class DEFAULT FACTORY
{
public:
	FACTORY();
	~FACTORY();
	static Sim* getinstance();
	static IMobile* getMobile();
	static ICalculator* getCalculator();


};

#endif // !AirtelFACTORY_H
#ifndef Airtel_H
#define Airtel_H



#ifdef Airtel_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>
#include"..\SIM\Sim.h"

class DEFAULT Airtel : public Sim
{
public:
	Airtel();
	~Airtel();
	void greet();
};

#endif // !Airtel_H


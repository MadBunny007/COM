#ifndef CCalculator_H
#define CCalculator_H



#ifdef CCalculator_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>
#include"..\SIM\ICalculator.h"

class DEFAULT CCalculator : public ICalculator
{
public:
	CCalculator();
	~CCalculator();
	
	void add();
	void subtract();
};

#endif // !CCalculator_H


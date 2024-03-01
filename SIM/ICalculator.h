#ifndef ICalculator_H
#define ICalculator_H

#ifdef ICalculator_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>

class DEFAULT ICalculator
{

public:

	ICalculator();
	~ICalculator();
	
	virtual void add() ;
	virtual void subtract();
};

#endif // !ICalculator_H

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
	
	virtual void add()=0 ;
	virtual void subtract()=0;
};

#endif // !ICalculator_H

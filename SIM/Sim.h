#ifndef SIM_H
#define SIM_H

#ifdef SIM_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>

class DEFAULT Sim
{

public:
	
	Sim();
	~Sim();
	 void greet();
};

#endif // !SIM_H

#ifndef JIO_H
#define JIO_H



#ifdef JIO_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>
#include"..\SIM\Sim.h"
class DEFAULT JIO: public Sim
{
public:
	JIO();
	~JIO();
	void greet();
};

#endif // !JIO_H


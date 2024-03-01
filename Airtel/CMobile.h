#ifndef CMobile_H
#define CMobile_H



#ifdef CMobile_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>
#include"..\SIM\IMobile.h"

class DEFAULT CMobile : public IMobile
{
public:
	CMobile();
	~CMobile();
	
	void makeCall();
	void receiveCall();
	void add();
	void subtract();
};

#endif // !CMobile_H


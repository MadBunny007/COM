#ifndef IMobile_H
#define IMobile_H

#ifdef IMobile_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>

class DEFAULT IMobile
{

public:

	IMobile();
	~IMobile();
	
	 virtual void makeCall()=0;
	 virtual void receiveCall()=0;
	 
};


#endif // !IMobile_H

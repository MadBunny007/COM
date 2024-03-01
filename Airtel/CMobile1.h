
#ifdef AIRTEL_EXPORTS
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG

#include<iostream>
#include"..\SIM\IMobile1.h"
#include"..\SIM\ICalculator1.h"

class DEFAULT CMobile : public IMobile,ICalculator
{
public:
	CMobile();
	~CMobile();
	
	void makeCall();
	void receiveCall();
	void add();
	void subtract();
};



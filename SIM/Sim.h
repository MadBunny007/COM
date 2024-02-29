#ifndef SIM_H
#define SIM_H

#ifdef SIM_H
#define DEFAULT __declspec(dllexport)
#else
#define DEFAULT __declspec(dllimport)
#endif // DEBUG



class DEFAULT Sim
{
public:
	Sim();
	~Sim();
	virtual void greet() = 0;
};

#endif // !SIM_H

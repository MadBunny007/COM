#include "pch.h"
#include "FACTORY.h"
#include"Airtel.h"
#include"..\SIM\ICalculator1.h"
#include"..\SIM\IMobile1.h"
#include "CCalculator1.h"
#include "CMobile1.h"

FACTORY::FACTORY()
{
}FACTORY::~FACTORY()
{
}
Sim* FACTORY::getinstance()
{
	return new Airtel();
}
IMobile* FACTORY::getMobile() {
	return new CMobile();
}
ICalculator* FACTORY::getCalculator() {
	return new CCalculator();
}

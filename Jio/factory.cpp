#include "pch.h"
#include "FACTORY.h"
#include"Jio.h"

FACTORY::FACTORY()
{
}FACTORY::~FACTORY()
{
}
Sim* FACTORY::getinstance()
{
	return new JIO();
}
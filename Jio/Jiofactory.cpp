#include "pch.h"
#include "Jiofactory.h"
#include"Jio.h"

JIOFACTORY::JIOFACTORY()
{
}JIOFACTORY::~JIOFACTORY()
{
}
Sim* JIOFACTORY::getinstance()
{
	return new JIO();
}
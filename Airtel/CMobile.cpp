#include "pch.h"
#include "CMobile.h"
using namespace std;
CMobile::CMobile()
{
}CMobile::~CMobile()
{
}

void CMobile::subtract()
{
}
void CMobile::add()
{
	int i1, i2;
	cout << "Enter the no to add \n";
	cout << "Enter the 1st No to add -> ";
	cin >> i1;
	cout << "\nEnter the 2nd No to add -> ";
	cin >> i2;
	cout << "\nresult-> ";
	cout << i1 + i2;
}
void CMobile::receiveCall()
{
	cout << "RECEIVECALL";
}
void CMobile::makeCall()
{
	cout << "MAKECAKK";
}
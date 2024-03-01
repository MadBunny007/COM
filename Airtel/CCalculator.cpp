#include "pch.h"
#include "CCalculator.h"
using namespace std;
CCalculator::CCalculator()
{
}CCalculator::~CCalculator()
{
}
void CCalculator::subtract()
{
	int i1, i2;
	cout << "Enter the no to add \n";
	cout << "Enter the 1st No to Subtract -> ";
	cin >> i1;
	cout << "\nEnter the 2nd No to Subtract -> ";
	cin >> i2;
	cout << "\nresult-> ";
	cout << i1 - i2;
}
void CCalculator::add()
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
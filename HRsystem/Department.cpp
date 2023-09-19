#include "Department.h"

string Department::getname()
{
	return departName;
}

int Department::getID()
{
	return departID;
}

void Department::read()
{
	cout << "ID :";
	cin >> departID;
	cout << "Department name :";
	cin>> departName;
}

void Department::print()
{
	cout << "ID :" << departID << " \t " << departName << endl;
}


#pragma once
#include"SalariedEmployee.h"
#include<iostream>
#include<string>
using namespace std;
class ManagerEmployee:public SalariedEmployee
{
private:
	double bonus;
	double morebonus;

public:
	ManagerEmployee();
	void getinfo();
	void displayDetails();
	double getSalary();
	double addBonus();
};


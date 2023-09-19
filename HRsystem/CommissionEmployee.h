#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Employee.h"
class CommissionEmployee:public Employee
{
private:
	
public:
	CommissionEmployee();
	double target;
	double rate;
	void getinfo();
	void displayDetails();
	double getSalary();

};


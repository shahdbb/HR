#pragma once

#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;
class HourlyEmployee:public Employee
{
private:
	double hoursWorked;
	double rate;
	double morehours;
public:
	HourlyEmployee();
	void getinfo();
	void displayDetails();
	double getSalary();
	double addHours();



};


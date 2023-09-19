#pragma once
#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;
class SalariedEmployee : public Employee
{
private:
	
public:
	SalariedEmployee();
	double salary;
	void getinfo();
	void displayDetails();
	double getSalary();
};


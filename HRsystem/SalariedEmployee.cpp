#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
	salary = 0;
}

void SalariedEmployee::getinfo()
{
	Employee::getinfo();
	cout << "Salary:" << endl;
	cin >> salary;
}

void SalariedEmployee::displayDetails()
{
	Employee::displayDetails();
	cout << "Salary: " <<salary<< endl;

}

double SalariedEmployee::getSalary()
{
	return salary;
}

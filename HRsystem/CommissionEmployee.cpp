#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
	target = 0;
	rate = 0;
}

void CommissionEmployee::getinfo()
{
	Employee::getinfo();
	cout << "Target:" << endl;
	cin >> target;
	cout << "Rate:" << endl;
	cin >> rate;
}

void CommissionEmployee::displayDetails()
{
	Employee::displayDetails();
	cout << "Target: " << target << endl;
	cout << "Rate: " << rate << endl;
	cout << "Total Salary: " << getSalary() << endl;
}

double CommissionEmployee::getSalary()
{
	return rate*target;
}

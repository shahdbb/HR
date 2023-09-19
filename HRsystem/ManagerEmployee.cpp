#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee()
{
	bonus = 0;
	morebonus = 0;
}

void ManagerEmployee::getinfo()
{
	SalariedEmployee::getinfo();
	cout << "Bonus:" << endl;
	cin >> bonus;

	int x = -1;
	cout << "Want to add more bonus ? (1-Yes ,2-No)" << endl;
	cin >> x;
	if (x == 1) {
		cout << "More Bonus: " << endl;
		cin >> morebonus;
	}

}

void ManagerEmployee::displayDetails()
{
	addBonus();
	SalariedEmployee::displayDetails();
	cout << "Bonus: " << bonus << endl;
	cout << "Total Salary: " << getSalary() << endl;
	
}

double ManagerEmployee::getSalary()
{
	double value= SalariedEmployee::getSalary() + bonus;
	return value;
}

double ManagerEmployee::addBonus()
{
	return (bonus+=morebonus);
}

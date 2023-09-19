#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
	 hoursWorked = 0;
	 rate = 0;
	 morehours = 0;
}

void HourlyEmployee::getinfo()
{
	Employee::getinfo();
	cout<< "Hours Worked:" << endl;
	cin >> hoursWorked;
	cout << "Rate:" << endl;
	cin >> rate;
	int x=-1;
	cout << "Want to add more hours ? (1-Yes ,2-No)" << endl;
	cin >> x;
	if (x == 1) {
		cout << "More Hours: " << endl;
		cin >> morehours;
	}


}

void HourlyEmployee::displayDetails()
{
	Employee::displayDetails();

	cout << "Hours Worked : " << addHours() << endl;
	cout << "Rate: " << rate << endl;
	cout << "Total Salary: " << getSalary() << endl;

}

double HourlyEmployee::getSalary()
{
	
	return rate*hoursWorked;
}

double HourlyEmployee::addHours()
{

	return (hoursWorked += morehours);
}

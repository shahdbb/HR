#include "Employee.h"

Employee::Employee()
{
	m_depatment = nullptr;
	name = "";
	phone = "";
	email = "";
	jobTitle = "";
	ID = 0;
}

void Employee::setdepartment(Department*d)
{
	m_depatment = d;
}

Department Employee::getdepartment() const
{
	return *m_depatment;
}

void Employee::getinfo()
{
	cout << "ID:" << endl;
	cin >> ID;
	cout << "Name:" << endl;
	cin >> name;
	cout << "Phone:" << endl;
	cin >> phone;
	cout << "Email:" << endl;
	cin >> email;
	cout << "JobTile: " << endl;
	cin >> jobTitle;
}

void Employee::displayDetails()
{
	cout << "**** Employee Details ****" << endl;
	cout << "ID: " << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Phone: " << phone<< endl;
	cout << "Email: " << email << endl;
	cout << "JobTitle: " << jobTitle<< endl;
	if (m_depatment != nullptr) {
		cout << "\t Department :" << m_depatment->getname() << endl;
	}
	else
		cout << "";




}
 


unsigned int Employee::getid() const
{
	return ID;
}

void Employee::setname(string name)
{
	this->name = name;

}

void Employee::setphone(string phone)
{
	this->phone = phone;
}

void Employee::setemail(string email)
{
	this->email = email;
}

void Employee::setjobtitle(string jobTitle)
{
	this->jobTitle = jobTitle;
}

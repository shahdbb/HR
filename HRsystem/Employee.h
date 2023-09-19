#pragma once
#include"Department.h"
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	

protected:
	int ID;
	string name;
	string phone;
	string email;
	string jobTitle;
	Department *m_depatment;
public:

	Employee();
	void setdepartment(Department* d);
	Department getdepartment()const;
	virtual void getinfo();
	virtual void displayDetails();
	virtual double getSalary()=0;
	unsigned int getid() const;
	void setname(string);
	void setphone(string);
	void setemail(string);
	void setjobtitle(string);

};


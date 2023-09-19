#pragma once
#include<iostream>
#include<string>
using namespace std;
class Department
{
private:
	int departID;
	string departName;


public:

	void read();
	void print();
	string getname();
	int getID();


};


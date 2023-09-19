#pragma once
#include<iostream>
#include<string>
using namespace std;
class Benefit
{
protected:
	string planeType;
	double amount;

public:
	virtual double calculateBenefit();
	virtual void readinfo();
	virtual void getDetails();
	virtual double getamount() = 0;
};


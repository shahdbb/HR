#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Benefit.h"
class DentalBenefit :public Benefit
{
private:
	string Info;
public:
	DentalBenefit();
	double calculateBenefit();
	void readinfo();
	void getDetails();
	double getamount();

};


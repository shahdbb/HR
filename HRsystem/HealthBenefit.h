#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Benefit.h"
class HealthBenefit:public Benefit
{
private:
	string Info;
	string coverage;
public:
	HealthBenefit();
	 double calculateBenefit();
	 void readinfo();
	 void getDetails();
	 double getamount();

};


#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Employee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "ManagerEmployee.h"
#include"Benefit.h"
#include "HealthBenefit.h"
#include "DentalBenefit.h"

class HRSystem
{
private:
    Benefit***BenefitList;
	Employee**EmployeeList;
    int m_count;
    int m_size;
    int count;
    int n_size;
public:
    int var = 0;
    HRSystem(int);
    ~HRSystem();
    void addEmployee();
    void calcTotalPayroll();
    void editBenefit(int);
   void editEmployee(int);
    void delEmployee_system(int);
    void delben(int key);
    // void delEmployee_dep();
    void findEmployee(int);
    void showAll();
    bool assignDepToEmployeeById(unsigned int , Department*);
    void add_Benefit(int);
    int findById(unsigned int);


};


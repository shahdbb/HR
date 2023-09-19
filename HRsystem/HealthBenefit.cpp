#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{
    amount = 0;
    Info = "";
    planeType = "";
    coverage = "";
}

double HealthBenefit::calculateBenefit()
{
    return (0.20 * amount);
}

void HealthBenefit::readinfo()
{
    Benefit::readinfo();
    cout << "Info: " << endl;
    cin >> Info;
    cout << "Coverage: " << endl;
    cin >> coverage;

}

void HealthBenefit::getDetails()
{
    Benefit::getDetails();
    cout << "--Health--" << endl;
    cout << "Info: " << Info << endl;
    cout << "Coverage : " <<coverage << endl;
    cout <<"Benefit: " <<calculateBenefit() << endl;
 
}

double HealthBenefit::getamount()
{
    return amount;
}

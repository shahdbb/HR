#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{
    amount = 0;
    Info = "";
    planeType = "";
}

double DentalBenefit::calculateBenefit()
{
    return( 0.10*amount);
}

void DentalBenefit::readinfo()
{
    Benefit::readinfo();
    cout << "Info: " << endl;
    cin >> Info;
}

void DentalBenefit::getDetails()
{
    Benefit::getDetails();
    cout << "--Dental--" << endl;
    cout << "Info: " << Info << endl;
    cout << "Benefit: " <<  calculateBenefit() << endl;
 
}

double DentalBenefit::getamount()
{
    return amount;
}

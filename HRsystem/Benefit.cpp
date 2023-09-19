#include "Benefit.h"

double Benefit::calculateBenefit()
{
    return 0.0;
}

void Benefit::readinfo()
{

	cout << "Amount: " << endl;
	cin >> amount;
	cout << "Plantype: " << endl;
	cin >> planeType;


}

void  Benefit::getDetails()
{
	cout << "**** Benefit Details ****" << endl;
	cout << "Amount: " << amount << endl;
	cout << "Plane Type: " << planeType << endl;

    
}

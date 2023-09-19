#include "HRSystem.h"

HRSystem::HRSystem(int size=10)
{
	
	BenefitList = new Benefit **[size];
	for (int i = 0;i < size;i++)
	{
		BenefitList[i] = new Benefit*[2];
		for (int j = 0;j < 1;j++)
		{
			BenefitList[i][j] = new  HealthBenefit;
		}
		for (int x = 1;x < 2;x++)
		{
			BenefitList[i][x] = new  DentalBenefit;
		}
	}
	EmployeeList = new Employee * [size];
	m_size = size;
	n_size = size;
	m_count = -1;
	count = -1;

}

HRSystem::~HRSystem()
{
	for (unsigned int i = 0;i <= m_count;++i)
		delete EmployeeList[i];

	delete[] EmployeeList;
	EmployeeList = NULL;

	for (unsigned int i = 0;i <= m_count;++i)
		delete BenefitList[i];

	delete[] BenefitList;
	BenefitList = NULL;
}

void HRSystem::addEmployee()
{
	if ((m_count + 1) < m_size) {
		int x;
		cout << "Select Employee Type from the following"
			<< "\n(1-Salaried    2-Hourly    3-Commission    4-Manager ):";
		cin >> x;
		switch (x)
		{
		case 1:
		{
			EmployeeList[++m_count] = new SalariedEmployee();
			EmployeeList[m_count]->getinfo();
			cout << "User added ." << endl;
		}
		break;
		case 2: {
			EmployeeList[++m_count] = new HourlyEmployee();
			EmployeeList[m_count]->getinfo();
			cout << "User added ." << endl;
		}
			  break;
		case 3:
		{
			EmployeeList[++m_count] = new CommissionEmployee();
			EmployeeList[m_count]->getinfo();
			cout << "User added ." << endl;}
		break;
		case 4:
		{
			EmployeeList[++m_count] = new ManagerEmployee();
			EmployeeList[m_count]->getinfo();
			cout << "User added ." << endl;
		}
		break;
		default:
			cout << "Wrong Choice" << endl;
		}
	}
	else
		cout << "Full list!" << endl;


}

void HRSystem::calcTotalPayroll()
{

	double total = 0.0;
	for (auto i = 0; i <= m_count;++i) {
		total += ((EmployeeList[i]->getSalary())+(BenefitList[i][0]->getamount())+(BenefitList[i][1]->getamount()));
	}

	cout<< "TotalPayroll:" << total << endl;
}

void HRSystem::editBenefit(int dd)
{
	int index = findById(dd);

	BenefitList[index][0]->readinfo();
	BenefitList[index][1]->readinfo();


}



void HRSystem::editEmployee(int empid)
{
	cout << "Choose the list below what you want to edit" << endl;
	int x;
	cout << "1-Edit name    2-Edit phone    3-Edit email    4-Edit JobTitle " << endl;
	cin >> x;
	bool edited = false;
	switch (x) {
	case 1:
	{
		string n;
		cin >> n;
		for (int i = 0;i <= m_count;++i) {
			if (EmployeeList[i]->getid() == empid) {
				EmployeeList[i]->setname(n);
				edited = true;
				break;
			
			}
		}
	}
	break;
	case 2:
	{
		string p;
		cin >> p;
		for (int i = 0;i <= m_count;++i) {
			if (EmployeeList[i]->getid() == empid) {
				EmployeeList[i]->setphone(p);
				edited = true;
				break;
			}
		}

	}
	break;
	case 3:
	{
		string e;
		cin >> e;
		for (int i = 0;i <= m_count;++i) {
			if (EmployeeList[i]->getid() == empid) {
				EmployeeList[i]->setemail(e);
				edited = true;
				break;
			}
		}

	}
	break;
	case 4:
	{
		string j;
		cin >> j;
		for (int i = 0;i <= m_count;++i) {
			if (EmployeeList[i]->getid() == empid) {
				EmployeeList[i]->setjobtitle(j);
				edited = true;
				break;
			}
		}
	}
	break;
	default:
		cout << "Wrong choice " << endl;
	}
	
	
	if (edited) {
		cout << "it is edited\n";
	}
	else {
		cout << "Not exist\n";
	}
}

void HRSystem::delEmployee_system(int empid)
{
	bool deleted = false;

	for (int i = 0;i <= m_count;++i) {
		if (EmployeeList[i]->getid() == empid) {
			while (i < m_count )
			{
				EmployeeList[i] = EmployeeList[i + 1];
				i++;
			}
			m_count--;
			deleted = true;
			break;


		}
		
	}
	int pos = findById(empid);


	for (int i = pos; i < n_size - 1; ++i) {
		BenefitList[i] = BenefitList[i + 1];
	}

	if (deleted) {
		cout << "it is deleted\n";
	}
	else {
		cout << "Not exist\n";
	}
}

void HRSystem::delben(int key)
{
	int ind = findById(key);
	BenefitList[ind][0] = new DentalBenefit;
	BenefitList[ind][1] = new HealthBenefit;
}

void HRSystem::findEmployee(int iD)
{
	int found_counter = 0;
	for (int i = 0;i <= m_count;++i) {
		if (EmployeeList[i]->getid()==iD) {
			 EmployeeList[i]->displayDetails();

			 if (BenefitList[i][0]->getamount() != 0)
			 {
				 BenefitList[i][0]->getDetails();
			 }

		if (BenefitList[i][1]->getamount() != 0)
		{
			BenefitList[i][1]->getDetails();
		}
			found_counter++;
		}
	}
	if (found_counter == 0) {
		cout << "Not found\n";
	}
	else {
		cout << " founded\n";
	}
}



void HRSystem::add_Benefit(int ID)
{
	var = 0;
	if ((count + 1) < 10)
	{

		int pos = findById(ID);
		if (pos == -1)
		{
			cout << "Wrong ID" << endl;
			return;

		}
		else
		{
			int type;
			cout << "Select Benefit Type from the following"
				<< "\n (1-All Benefits    2-Helath Benefit    3-Dental Benefit):";
			cin >> type;
			switch (type) {
			case 1: {
				
				BenefitList[pos][0]->readinfo();
				BenefitList[pos][1]->readinfo();
				if (pos > count)
				{
					count = pos;
				}
			}break;
			case 2: {
		
				BenefitList[pos][0]->readinfo();


			
				if (pos > count)
				{
					count = pos;
				}
				
			}
				  break;
			case 3:
			{
			
				BenefitList[pos][0]->readinfo();


				if (pos > count)
				{
					count = pos;
				}
			}
				  break;
			  defalut:
				  cout << "Wrong Choice" << endl;
			}
		}
	}
	else
		cout << "Full List " << endl;
}



int HRSystem::findById(unsigned int emp_id)
{
	for (auto i = 0; i <= m_count;++i) {
		if (EmployeeList[i]->getid() == emp_id)
			return i;
	}
	return -1;
}

void HRSystem::showAll()
{
	for (auto i = 0; i <= m_count;++i) {
		EmployeeList[i]->displayDetails();
		if (count == -1) {
			continue;
		}
		else
		{
			if (BenefitList[i][0]->getamount() != 0 )
			{
				BenefitList[i][0]->getDetails();
			}
		
		}
		
		
	
		if (BenefitList[i][1]->getamount() != 0 )
		{
			BenefitList[i][1]->getDetails();
			}
		
	}
	cout << "----------------------------------------" << endl;
}

bool HRSystem::assignDepToEmployeeById(unsigned int emp_id, Department* d)
{
	int emp_idx = findById(emp_id);
	if (emp_idx == -1) return false;
	Employee* p = EmployeeList[emp_idx];
	p->setdepartment(d);
	return true;
}
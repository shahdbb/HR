#include<iostream>
#include"HRSystem.h"
#include"Department.h"
using namespace std;
int main()
{
    unsigned int depart_size = 10;
    unsigned int depart_count = 0;
    Department* depart = new Department[depart_size];

    HRSystem ob(10);
    int c=1;
    while (c != 0) {
        cout <<"(1) Add employee\n"
            << "(2) Modify existing employee\n"
            << "(3) Delete employee\n"
            << "(4) Search employee\n"
            << "(5) Print All(report)\n"
            << "(6) CalcPayroll\n"
            << "(7) Add Benefit\n"
            << "(8) Delete Benefit\n"
            << "(9) Modify Benefit\n"
            << "(10) Add department\n"
            << "(11) Print All departments\n"
            << "(12) Assign\n"
            << "(0) Exit\n"
            << "Enter choice:\n";
        cin >> c;
        switch (c)
        {
        case 1:
            ob.addEmployee();
            break;
        case 2:
        {
            int id;
            cout << "Enter Emplpoyee ID : " << endl;
            cin >> id;
            ob.editEmployee(id);
           
        }
            break;
        case 3:
        {

            int idd;
            cout << "Enter Emplpoyee ID : " << endl;
            cin >> idd;
            ob.delEmployee_system(idd);
            
        }
            break;
        case 4:
        {
            int iddd;
            cout << "Enter Emplpoyee ID : " << endl;
            cin >> iddd;
            ob.findEmployee(iddd);
        }
            break;
        case 5:
            ob.showAll();
            break;
        case 6:
        {
            ob.calcTotalPayroll();
        }
            break;
        case 7:
        {
            int id;
            cout << "Enter Employee ID : ";
            cin >> id;
            ob.add_Benefit(id);
        }
        break;
        case 8:
        {
            int id;
            cout << "Enter Employee ID : ";
            cin >> id;
            ob.delben(id);
        }
        break;

        case 9:
        {
            int id;
            cout << "Enter Employee ID : ";
            cin >> id;
            ob.editBenefit(id);
        }
        break;
        case 10:
        {
            if (depart_count < depart_size) {
                depart[depart_count++].read();
            }
            else {
                cout << "full";
            }
        }
            break;

        case 11:
        {
            for (auto i = 0; i < depart_count; ++i)
                depart[i].print();

        }
        break;
        case 12:
        {
            int dept_id = -1;
            cout << "Dept ID:";
            cin >> dept_id;

            int dept_idx = -1;
            for (auto i = 0;i < depart_count;++i) {
                if (depart[i].getID() == dept_id) {
                    dept_idx = i;
                    break;
                }
            }
            if (dept_idx == -1) {
                cout << "not found!" << endl;
                break;
            }
            else {
                int emp_id = -1;
                cout << "Employee id:";
                cin >> emp_id;
                bool assignedSuccess = ob.assignDepToEmployeeById(emp_id, depart + dept_idx);
                if (assignedSuccess) {
                    cout << "success" << endl;
                }
                else {
                    cout << "not found" << endl;
                }
            }
        }

        case 0:
            return 0;
            
        default:
            cout << "try again!";

        }

    }
	return 0;
}
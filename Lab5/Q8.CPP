/*  */
#include <iostream>
using namespace std;
class employee{
protected:
    int eId, salary;
    char eName[20];
public:
    void getdata(){
        cout << "Enter employee id:" << endl;
        cin >> eId;
        cout << "Enter employee name:" << endl;
        cin >> eName;
        cout << "Enter employee salary:" << endl;
        cin >> salary;
    }
    void displaydata(){
        cout << "Employee ID=" << eId << endl;
        cout << "Employee Name=" << eName;
        cout << "Employee Salary=" << salary;
    }
};
class company{
protected:
    char cName[20];
    char cLocation[20];
    employee E;
public:
    void getCompanyData(){
        cout << "Enter company name:" << endl;
        cin >> cName;
        cout << "Enter company location:" << endl;
        cin >> cLocation;
        E.getdata();
    }
    void displaycompanydata(){
        cout << "Company Information:" << endl;
        cout << "Company name=" << cName << endl;
        cout << "Company Location=" << cLocation << endl;
        cout << "Employee Information=" << endl;
        E.displaydata();
    }
};
int main(){
    company C;
    C.getCompanyData();
    C.displaycompanydata();
    return 0;
}

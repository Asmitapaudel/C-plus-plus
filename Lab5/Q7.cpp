/* Create a class Student with data member name and roll number and necessary member function .Again 
create another class marks having data members oop,pm,bc,acc,fin and also add necessary functions .
Derive the class result from Student and Marks having its own data members total data members.
Finally create an object of result class and then read and display its record */
#include <iostream>
using namespace std;
class student{
protected:
    char name[10];
    int rollNo;
public:
    void getdata()
    {
       cout<<"Enter your name:"<<endl;
       cin>>name;
       cout<<"Enter your rollnumber:"<<endl;
       cin>>rollNo;
    }
};
class marks{
protected:
    int oop, pm, bc, acc, fin;
public:
    void getmarks()
    {
        cout<<"Enter marks for 5 subjects:oop,pm,bc,acc,fin:"<<endl;
        cin>>oop>>pm>>bc>>acc>>fin;
    }
};
class result : public student, public marks{
protected:
    int total;
    float percentage;
public:
    void displayresult()
    {
        total = oop + pm + bc + acc + fin;
        percentage = (total / 500) * 100;
        cout << "Details for roll number=" << rollNo << endl;
        cout << "Student name=" << name << endl;
        cout << "Your total marks is=" << total << endl;
        cout << "Your percentage is=" << percentage << endl;
    }
};
int main(){
    result r;
    r.getdata();
    r.getmarks();
    r.displayresult();
    return 0;
}
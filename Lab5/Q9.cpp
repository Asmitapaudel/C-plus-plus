#include <iostream>
using namespace std;
class staff
{

protected:
    char name[10];
    char address[10];
    char post[10];

public:
    staff()
    {
        cout << "Enter staff name:" << endl;
        cin >> name;
        cout << "Enter address:" << endl;
        cin >> address;
        cout << "Enter post:" << endl;
        cin >> post;
    }
};

class nonteaching : virtual public staff
{
public:
    nonteaching() :staff(){
                        // cout<<"Enter nonTeaching Information:"<<endl;
                    };

    void displayNonTeaching()
    {
        cout << "NON TEACHING:" << endl;
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
        cout << "Post:" << post << endl;
    }
};
class teaching : virtual public staff{
protected:
    char dept[10];
public:
    teaching() : staff(){
        // cout<<"Enter Teaching Information:"<<endl;
        cout << "Enter department:" << endl;
        cin >> dept;
    }
    void displayTeaching(){
        cout << "TEACHING:" << endl;
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
        cout << "Post:" << post << endl;
        cout << "Department:" << dept << endl;
    }
};
class admin : public nonteaching, public teaching{
protected:
    int workHours;
public:
    admin() : staff(){
        // cout << "Enter Admin Information:" << endl;
        cout << "Enter workhours:" << endl;
        cin >> workHours;
    }
    void displayAdmin(){
        cout << "ADMIN:" << endl;
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
        cout << "Post:" << post << endl;
        cout << "Department:" << dept << endl;
        cout << "Workhours:" << workHours << endl;
    }
};
int main(){
    cout << "For non teaching:" << endl;
    nonteaching N;
    N.displayNonTeaching();
    cout<<endl;
    cout << "For teaching:" << endl;
    teaching T;
    T.displayTeaching();
    cout<<endl;
    cout << "For Admin:" << endl;
    admin A;
    A.displayAdmin();
    return 0;
}
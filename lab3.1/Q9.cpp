/* Write a Program to Implement a Class Student having following members:
 */
#include<iostream>
using namespace std;
class Student{
    string sName;
    float Marks_array[5];
    float Total=0, Tmax;
    public:
    void Assign(){
        cout<<"Enter the name of student:";
        cin>>sName;
        for (int i=1;i<=5;i++){
            cout<<"Enter the marks of "<<i<<" subject:";
            cin>>Marks_array[i];
            // cout<<endl;
        }
    }
    void Compute(){
        for (int i=1;i<=5;i++){
           Total=Total+Marks_array[i]; 
        }
        Tmax=Total/5;
    }
 
    void display(){
        cout<<"Name of student:"<<sName<<endl;
        cout<<"Total marks:"<<Total<<endl;
        cout<<"Average marks:"<<Tmax<<endl;
    }
};
int main(){
    Student s;
    s.Assign();
    s.Compute();
    s.display();
    return 0;
}
/* Write a program to print the names of students by creating a Student class. If no name is passed 
while creating an object of the Student class, then the name should be "Unknown", otherwise the name 
should be equal to the String value passed while creating the object of the Student class. */
#include<iostream>
using namespace std;
class Student{
    string name;
public:
    Student(){
        name="Unknown";
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"The name of the student is:"<<name<<endl;
    }
};

int main(){
    Student s;
    return 0;
}
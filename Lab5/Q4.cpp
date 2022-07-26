/* Create a class Student with Data member roll-no and two function to initilize and display it.Derive
a new class  Test which has two method to assign and display marks in two subject .Create a new class
Test Sport  */
#include<iostream>
using namespace std;
class Student{
     public:
     int roll;
     void getRoll(){
         cout<<"Enter your roll Number:"<<endl;
         cin>>roll;
     } 
 };
 class Test: public virtual Student{
     public:
     int sub1,sub2;
     void getMarks(){
         cout<<"Enter your Marks in 1st subject:"<<endl;
         cin>>sub1;
         cout<<"Enter your Marks in 2nd subject:"<<endl;
         cin>>sub2;
     }
 };
 class sport:public virtual Student{
    public:
    int score;
    void getScore(){
         cout<<"Enter your score in sport:"<<endl;
         cin>>score;
     } 
 };
class Result: public Test ,public  sport{
    public:
    void display(){
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Total marks:"<<sub1+sub2<<endl;
        cout<<"Score in sport:"<<score;
    }
};
int main (){
    Result R;
    R.getRoll();
    R.getMarks();
    R.getScore();
    R.display();
    return 0;

}
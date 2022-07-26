/* Create a class called time that has separate int data member for hours, minutes and seconds. One
constructor should initialize this data to 0 and another should initialize it to fixed values. A member
function should display it in hh:mm:ss format. The final member function should add two objects of time
passed as arguments. Create two initialized time objects and one that isn't initialized in the main 
program.Then it should add the two initialized values together leaving the result in the third time
 object. */
#include<iostream>
using namespace std;
class Time {
     int hr,min,sec;
    public:
    Time(){
        hr=min=sec=0;
    }
    Time(int h,int m,int s){
        hr=h;
        min=m;
        sec=s;
    }
    void display(){
      cout<<"The time is:"<<hr<<"::"<<min<<"::"<<sec<<endl;
    }
    friend void sum(Time,Time);
};
void sum(Time t1,Time t2){
     Time t3;
     t3.hr=t1.hr+t2.hr;
     t3.min=t1.min+t2.min;
     t3.sec=t1.sec+t2.sec;
     if(t3.sec>60){
          t3.min=t3.min+(t3.sec/60);
          t3.sec=t3.sec%60;
      }
      if(t3.min>60){
          t3.hr=t3.hr+(t3.min/60);
          t3.min=t3.min%60;
     }
     cout<<"The sum of two times:"<<t3.hr<<" hrs "<<t3.min<<" min "<<t3.sec<<" sec "<<endl;
    }
int main (){
     Time t1(2,40,30),t2(3,50,40);
     t1.display();
     t2.display();
     sum(t1,t2);
     return 0;
}
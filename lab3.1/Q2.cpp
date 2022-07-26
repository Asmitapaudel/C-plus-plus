/* Write a class circle with one member variable,radius .Include a member function getradius()
to　get data from user and another function printarea() to display area */
#include<iostream>
using namespace std;
#define PI 3.14
class Circle{
    float radius;
    public:
    void getRadius(){

        cout<<"Enter the radius:"<<endl;
        cin>>radius;
    }
    void printArea(){
        cout<<"Area of circle is="<<PI*radius*radius;
    }
};
int main(){
    Circle c;
    c.getRadius();
    c.printArea();
    return 0; 
}
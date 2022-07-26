/* Write a complete program to convert the polar co-ordinates into rectangular coordinates.
(hint: polar coordinates (radius, angle) and rectangular co-ordinates (x.y) where x=r* cos(anglc) and
y=r*r*sin(angle)). */
#include<iostream>
#include<math.h>
using namespace std;
const double PI=3.14;
class Rectangular{
    double x,y;
    public:
    Rectangular(){
        x=0;
        y=0;
    }
    Rectangular(double a,double b){
        x=a;
        y=b;
    }
    void output(){
        cout<<"\nIn Rectangular form:\nx="<<x<<" and y="<<y;
    }
};

class Polar{
    int theta,r;
    public:
    Polar (double r,double theta){
        this->r=r;
        this->theta=theta;
    }
    operator Rectangular(){
        double x,y;
        float atheta=theta*PI/180;
        x=r*cos(atheta);
        y=r*r*sin(atheta);
        return Rectangular(x,y);
    }
    void output(){
        cout<<"In Polar form:";
        cout<<"\nr="<<r;
        cout<<"\ntheta="<<theta;
    }
};
int main(){
    Rectangular r1,r2;
    Polar p1(3,45);
    r1=p1;// polar to rectangular conversion
    p1.output();
    r1.output();
}
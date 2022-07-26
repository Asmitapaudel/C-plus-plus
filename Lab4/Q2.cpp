/* Create a class named 'Rectangle' with two data members- length and breadth and a function to 
calculate the area which is length* breadth'. The class has three constructors which are:
a - having no parameter - values of both length and breadth are assigned zero.
b- having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
c - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas. */
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int len,bre;
    public:
    Rectangle(){};
    Rectangle( int l, int b){
        len=l;
        bre=b;
    }
    Rectangle( int i ){
        len=i;
        bre=i;
    }
    void Calculate(){
        cout<<endl<<"Area("<<len<<"*"<<bre<<")= "<<len*bre;
    }
};

int main(){
	Rectangle r1;
	Rectangle r2(15,12) ;
	Rectangle r3 (10);
	r1.Calculate();
	r2.Calculate();
	r3.Calculate();
	return 0;
}
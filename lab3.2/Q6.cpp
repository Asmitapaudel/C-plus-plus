/*  Write a C++ program to add two complex numbers using friend function. Use the concept of passing of arguments to the function
 and returning objects to perform the task.*/
#include<iostream>
using namespace std;
class Complex{
    int x,y;
    public: 
    void input(int real ,int imag){
        x=real;
        y=imag;
    }
   
    friend void sum(Complex,Complex);
};
 void sum(Complex C1,Complex C2){
    int x,y;
        x=C1.x+C2.x;
        y=C1.y+C2.y;
       cout<<"Real part="<<x<<endl<<"Imaginary part="<<y;
    }
int main (){
    Complex a,b;
    a.input(3,5);
    b.input(8,9);
    sum(a,b);
    return 0;
}
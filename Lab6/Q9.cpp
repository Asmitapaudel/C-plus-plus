//9. Write a function template to calculate the average and multiplication of numbers.
#include<iostream>
using namespace std;
template<class T1, class T2  >
class Number{
    T1 a;
    T2 b;
    public :
    Number(T1 x,T2 y){
        a=x;
        b=y;
    }
    void Average(){
         cout<<"Average="<<(a+b)/2<<endl;
    }
    void multiplication(){
         cout<<"multiplication="<<a*b<<endl;
    }
};
int main(){
    Number <int,float>s1(3,9.75);
    s1.Average();
    s1.multiplication();
    return 0;
}
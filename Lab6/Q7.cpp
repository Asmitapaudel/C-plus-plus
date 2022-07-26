//Create a template to find the sum of two integers and floats
#include<iostream>
using namespace std;
template<class T1, class T2 ,class T3 >
class Sum{
    T1 a;
    T2 b;
    T3 c;
    public :
    Sum(T1 x,T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void calculate(){
         cout<<"Sum="<<a+b+c<<endl;
    }
};
int main(){
    Sum <int,int,float>s1(6,3,9.75);
    s1.calculate();
    return 0;
}

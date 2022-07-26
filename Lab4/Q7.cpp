//WAP to calculate the sum of integer numbers using constructor overloading.
#include<iostream>
using namespace std;
class SumInteger{
    int a;
    int b;
    public:
    SumInteger(int x){
        a=x;
    }
    SumInteger(int x ,int y){
        a=x;
        b=y;
    }
    void result(){
        cout<<"Sum="<<a+b<<endl;
    }
};
int main (){
   SumInteger s1(8) ,s2(5,7);
   s1.result();
   s2.result();
     return 0;
}
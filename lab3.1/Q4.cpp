/* Write a c++ program to represent a class called Large . Include two data member to store numbers.
Use member function get() ,largest(),and put() to get data ,to　find largest of two and finally display 
largest .
    Create an instance of above class to perform these tasks */
#include<iostream>
using namespace std;
class Large{
    int num1 ,num2;
    public:
        int getNum(){
            return num1;
            return num2;
        }
        void putNum(){
            cout<<"Enter any two Numbers:"<<endl;
            cin>>num1>>num2;
        }
        int Largest(){
            if(num1>num2)
                return num1;
            else 
                return num2;
        }
        
};   
int main(){
    Large L;
    L.getNum();
    L.putNum();
    cout<<"Largest Number is ="<<L.Largest();
    return 0;
}
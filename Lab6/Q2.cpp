//Write a program to overload multiplication Multiplication (*) showing the multiplication of two objects.
#include<iostream>
using namespace std;
class Multiplication{
    public:
		int num;
		Multiplication(int num){
			this->num=num;
		}
		Multiplication operater * (Multiplication obj){
			Multiplication m;
			m.num =num * obj.num;
			return m;
		}
		void display(){
			cout<<"Number : "<<num<<endl;
		}
};
int main(){
   Multiplication m1(2),m2(5);
	Multiplication m3;
	m3=m1*m2;
	m3.display();
    return 0;

}
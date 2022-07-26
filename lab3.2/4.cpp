/* Write a C++ program to swap the private values of two classes using friend function .*/
#include<iostream>
using namespace std;
class First;
class second {
    friend void swapup(First ,second );
    int b;
    public:
    void setValue(){
        cout <<"Enter an integer:"<<endl;
        cin>>b;
    }
    void displayValue(){
        cout<<"b="<<b<<endl;
    }
};
class First{
    friend void swapup(First ,second );
   int a;
   public:
   void setvalue(){
        cout<<"Enter an integer:"<<endl;
        cin>>a;
    }
    void displayvalue(){
        cout<<"a="<<a<<endl;
    }
};
void swapup(First x,second y){
    int temp1;
    temp1=x.a ;
    x.a=y.b;
    y.b=temp1;
    cout<<"a="<<x.a<<endl<<"b="<<y.b;
}
int main(){
    First x;
    second y;
    x. setvalue();
    y. setValue();
    cout<<"Befor swapping"<<endl;
    x.displayvalue();
    y.displayValue();
    cout<<"After swapping"<<endl;
    swapup(x,y);
    return 0;

}

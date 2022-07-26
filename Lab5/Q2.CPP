/* Create two Classes class 1 and class 2 each having data member for storing a number, a method to 
initilize it. Create  a new class 3 that is derived from both classes class 1 and class 2 and consisting 
of a method that display the sum of two number from class 1,class 2 */
#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void getNum1(){
        cout<<"Enter Number:"<<endl;
        cin>>x;
 }
};
class B{
    public:
    int y;
    void getNum2(){
        cout<<"Enter Number:"<<endl;
        cin>>y;
    }
};
class C: public A , public B{
    public:
     void display( ){
        cout<<"sum="<<x+y<<endl;
     }
};
int main(){
    C c;
    c.getNum1();
    c.getNum2();
    c.display();
    return 0;
}
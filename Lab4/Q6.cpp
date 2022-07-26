/* WAP that copies data member of one object to another with the help of a copy constructor.  */
#include<iostream>
using namespace std;
class Constructor{
    int a;
    public:
    Constructor(int b){
        a=b;
    }
    void display(){
        cout<<"a="<<a<<endl;
    }
   
};
int main (){
   
    Constructor c(9);
    Constructor c1(c);
    c.display();
    c1.display();
     return 0;
}
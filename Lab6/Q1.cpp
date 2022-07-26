//Write a program showing "++" and "- -" operator overloading in any object.
#include <iostream>
using namespace std;
class Operator{
    int num;
    public:
    void getNum(int num){
    this->num=num;
    }
    void showNum(){
    cout<< "Number : " <<num<<endl;
    }
    void operator ++(){
    ++num;
    }
    void operator --(){
    --num;
    }
};
int main(){
    Operator u;
    u.getNum(12);
    u.showNum(); 
    ++u;
    cout<<"After Increment :"<<endl;
    u.showNum();
    --u;
    cout<<"After Decrement :"<<endl;
    u.showNum();
    return 0;
}
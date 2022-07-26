//WAP illustrating Class Declaeation ,and Accessing class member
#include<iostream>
using namespace std;
class item {
int num;
float cost;
public:
void getdata(int a,float b){
    num=a;
    cost=b;
}
void putdata(){
    cout<<num<<endl<<cost;
}
};
int main(){
    item x;
    x.getdata(4,56.5);
    x.putdata();
    return 0;

}
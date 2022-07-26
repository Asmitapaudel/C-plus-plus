/* Create two classes ABC and XYZ ,having one integer member variable and a member function to get the input
.Now create a function max () which takes as arguments object of ABC and XYX and display the greatest of two 
.Declare this function friend function in both classes*/
#include<iostream>
using namespace std;
class XYZ;
class ABC{
int a;
public:
void set(){
    int x;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    a=x;
}
friend void max(ABC,XYZ);
};
class XYZ{
int b;
public:
void set(){
    int y;
    cout<<"Enter a number:"<<endl;
    cin>>y;
    b=y;}
    friend void max(ABC ,XYZ);
};
void max(ABC n,XYZ m){
    if(n.a>=m.b)
        cout<<n.a<<" is greater"<<endl;
    else
    cout<<m.b<<" is greater"<<endl;
}
int main (){
    ABC n;
    XYZ m;
    n.set();
    m.set();
    max(n,m);
    return 0;
}
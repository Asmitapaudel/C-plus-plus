/* Calculate the mean of two private values of class sample using friends function*/
#include<iostream>
using namespace std;
class Sample{
    int a,b;
    public:
    void get(){
        cout<<"Enter a number:"<<endl;
        cin>>a;
        cout<<"Enter a number:"<<endl;
        cin>>b;
        }
   friend void mean(Sample);
};
void mean(Sample s){
    float m;
    m=(s.a+s.b)/2;
    cout<<"Mean="<<m<<endl;

}
int main (){
    Sample s;
    s.get();
    mean(s);
    return 0;
}
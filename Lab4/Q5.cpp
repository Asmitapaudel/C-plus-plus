/* WAP to find the simple interest. (Pass default argument rate in constructor). */
#include<iostream>
using namespace std;
class SimpleInterest{
    int Amt,time,rate;
    public:
    SimpleInterest(int r=8){
        rate=r;
        cout<<"Enter The Principle Amount= "<<endl;
        cin>>Amt;
        cout<<"Enter The Time= "<<endl;
        cin>>time;
        cout<<"Simple Interest= "<<(Amt*time*rate)/100<<endl;
    }
};
int main(){
    SimpleInterest S(8);
    return 0;
}

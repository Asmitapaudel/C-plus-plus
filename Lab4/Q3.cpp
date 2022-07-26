/*Suppose you have a Bank account with an initial amount of $50 and you have to add some more amount to
it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of $SO. Now make
two constructors of this class as follows:
a - without any parameter - no amount will be added to the account
b- having a parameter which is the amount that will be added to the account
Create an object of the 'AddAmount' class and display the final amount in the account. */
#include<iostream>
using namespace std;
// const Amount=50;
class AddAmount{
    float amount=50;

    public:
     AddAmount(){
        //  amount=50;
        cout<<"Intial amount ="<<amount<<endl;
     }
    AddAmount(int amt){
        //  amount=50;
        amount+=amt;
         cout<<"final amount ="<<amount<<endl;
    }

};
int main (){
    AddAmount A,A1(100);
    return 0;
}

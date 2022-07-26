/* 8. Define a class to represent a bank account. Include the following members:
Data members: Name of the depositor, Account Number, Type of account, Balance amount in the account
Member Function: To assign initial values, To deposit an amount, To withdraw an amount after checking the balance, To display name
 and balance
Write a main program to test the program*/
#include<iostream>
#include<stdio.h>
using namespace std;
class BankAccount{
    char name[20];
    char account_type[20];
    int account_number;
    int balance;
    public:
    void initialize(){
        cout<<"Enter Account Holders Name:"<<endl;
        cin>>name;
        cout<<"Enter Account type:"<<endl;
        cin>>account_type;
        cout<<"Enter account number:"<<endl;
        cin>>account_number;
        cout<<"Enter balance to deposit:"<<endl;
        cin>>balance;
    }
    void deposit(){    //deposit() function to deposit amount in account
        int bal;
        cout<<"\nEnter the amout to deposit:";
        cin>>bal;
        balance+=bal;
        cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
    }
    void check(){     //check() function to withdraw amount and check remaining balance
        int bal;
        cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
        cin>>bal;
        if(bal<=balance){
            balance-=bal;
            cout<<"\nRemaining Balance:"<<balance;
            }
            else
            exit(0);
    }
    void display(){
        cout<<"\nName :";
        puts(name);
        cout<<"\nBalance :"<<balance;
    }
};
int main (){
    int i;
    // clrscr();
    BankAccount bk;
    bk.initialize();
    cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
    cin>>i;
    if(i==1)
        bk.display();
    else if(i==2)
        bk.deposit();
    else if(i==3)
        bk.check();  
    return 0;
}
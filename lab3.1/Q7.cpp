/* Write a class item with data item number and a static member variable count. Define a member function getdata() to accept input from 
user as well as count the number of times this function is called by different objects. Write a main function to test this class. */
#include<iostream>
using namespace std;

class Item{
    static int count;
    int x;
    public:
    void getdata(){
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
        x++;
        count++;
    }
    void dataItemNumber(){
        cout<<"This function is called =  "<<count<<" times."<<endl;
        // cout<<"The value of x is  =  "<<x;
        }
};
   int Item::count=0;
int main(){
    Item I1,I2,I3;
    I1.getdata();
    I2.getdata();
    I3.getdata();
    I1.dataItemNumber();
    return 0;
    } 
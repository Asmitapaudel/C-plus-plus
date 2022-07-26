/* Create a class called Mountain with data members name, height, location and a constructor that 
initializes the members to the values passed to it as parameters, a function called CmpHeight() to compare
two objects and Display Info to display the information of Mountain. In main, create two objects of the 
class mountain and print the information of the mountain which is greatest height. */
#include<iostream>
using namespace std;
class Mountain{
    string name, location;
    float height;
    public:
    Mountain(){
      cout<<"Enter the name height and location of Mountain:"<<endl;
      cin>>name>>height>>location;
    }
    void display(){
        cout<<endl;
        cout<<"Name= "<<name<<endl<<"Height= "<<height<<endl<<"Location= "<<location<<endl;

    }
    friend void CmpHeight(Mountain ,Mountain);
};
void CmpHeight(Mountain m1 ,Mountain m2){
    cout<<"Information of the mountain which is greatest height is "<<endl;
    if (m1.height>m2.height){
        cout<<"Name= "<<m1.name<<endl<<"Height= "<<m1.height<<endl<<"Location= "<<m1.location<<endl;
    }
    else
     cout<<"Name= "<<m2.name<<endl<<"Height= "<<m2.height<<endl<<"Location= "<<m2.location<<endl;
}
int main(){
    Mountain m1,m2;
    m1.display();
    m2.display();
    CmpHeight(m1,m2);
    return 0;
}
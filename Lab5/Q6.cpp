/* Create a class Student with data member roll_no and two functions to initialize and display it.
 Derive two new classes Theory and Practical from Student. Define suitable functions to assign and 
 display theory and practical marks for two different subjects. Again, derive a new class Result from 
 both class Theory and Practical and add a new function to display the final total marks of student.
Write a main program to test your class. */
#include<iostream> 
using namespace std; 
class Student{
    int roll;
    public:
    void setroll() {
        cout<<"Enter your Roll:";
        cin>>roll; 
    }
    void showroll() {
        cout<<"Roll= "<<roll<<endl;
    }
};
class Theory: public virtual Student{
    protected:
    float comth,ength;
    public:
    void setdatatheory(){
        cout<<"Enter Theory marks of computer and English "<<endl; 
        cin>>comth>>ength;
    }
    void showmarkstheory() {
        cout<<"Computer(Theory)= "<<comth<<endl; 
        cout<<"English(THeory)= "<<ength<<endl;
    }
}; 
class Practical: public virtual Student {
    protected:
    float compr,engpr;
    public: 
    void setdatapractical(){
        cout<<"Enter Practical marks of computer and English "<<endl; 
        cin>>compr>>engpr;
    }
    void showmarkspractical() {
        cout<<"Computer(Practical)= "<<compr<<endl; 
        cout<<"English(Practical)= "<<engpr<<endl;
    }
};
class Result: public Theory, public Practical {
    public: 
    void showtotal(){
        float tot;
        tot=comth+ength+compr+engpr; 
        cout<<"Total obtained marks= "<<tot<<endl;
    }
 };
int main() {
    Result res;
    res.setroll(); //ambiguous because multipath exist to reach setroll() from derived class
    //so must use virtual base class to overcome this 
    res.setdatatheory();
    res.setdatapractical();
     res.showroll();
    res.showmarkstheory(); 
    res.showmarkspractical();
     res.showtotal();
    return 0;
 }

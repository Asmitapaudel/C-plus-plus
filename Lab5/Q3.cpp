/* A class Student consist of field roll ,a method to assigns roll number. A new class Test is derived
fron class Student and consists of two field sub1 and sub2 , a method to initilize these field with 
obtained marks. Again, a new class Resultnis derived from  Test and consist of a field total and method
 to display entire details along with obtained maksb.WAP to input roll number, marks in two different 
 subject and display total  */
 #include<iostream>
 using namespace std;
 class Student{
     public:
     int roll ;
     void getRoll(){
         cout<<"Enter your roll Number:"<<endl;
         cin>>roll;
     }
     
 };
 class Test: public Student{
     public:
     int sub1,sub2;
     void getMarks(){
         cout<<"Enter your Marks in 1st subject:"<<endl;
         cin>>sub1;
         cout<<"Enter your Marks in 2nd subject:"<<endl;
         cin>>sub2;
     }
 };
class Result: public Test{
    public:
    void display(){
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Total marks:"<<sub1+sub2<<endl;
    }
};
int main (){
    Result R;
    R.getRoll();
    R.getMarks();
    R.display();
    return 0;

}
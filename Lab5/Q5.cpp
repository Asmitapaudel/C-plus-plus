/* Define a shape class (with necessary constructors and member functions) in Object Oriented Programming
(abstract necessary attributes and their types). Write a complete code in C++ programming language.
i. Derive triangle and rectangle classes from shape class adding necessary attributes. 
ii. Use these classes in main function and display the area of triangle and rectangle.
*/
#include<iostream>
using namespace std;
class Shape{
    protected:
    float breadth, height, area;
     public: 
     void getshapedata(){
        cout<<"Enter breadth:"<<endl; 
        cin>>breadth;
        cout<<"Enter height:"<<endl;
         cin>>height;
     }
};
class Triangle:public Shape{
     public:
    void calarea(){ 
        area=(breadth * height)/2; 
        }
    void display(){
        cout<<"The area of triangle is"<<area<<endl; 
    }
};
class Rectangle:public Shape{
    public:
    void calarea(){ 
        area=breadth * height; 
    } 
    void display(){
        cout<<"Area of rectangle is"<<area<<endl;
     }
};
int main(){
    Triangle T;
    Rectangle R;
    cout<<"Enter triangle data:"<<endl;
    T.getshapedata(); 
    cout<<"Enter rectangle data:"<<endl; 
    R.getshapedata();
    T.calarea();
    R.calarea();
    T.display();
    R.display();
    return 0;
}
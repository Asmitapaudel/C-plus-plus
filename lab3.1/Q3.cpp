/* Write a class square with one member variable,length .Include a member function getlength()
to　get the length from user and another function printarea() and printperimeter() to display 
the area and perimeter of the square respectively */
#include<iostream>
using namespace std;
class Square{
    float length;
    public:
    void getLength(){

        cout<<"Enter the length:"<<endl;
        cin>>length;
    }
    void printArea(){
        cout<<"Area of square is="<<length*length<<endl;;
    }
    void printPerimeter(){
        cout<<"Perimeter of square is="<<2*(length+length)<<endl;
    }
};
int main(){
    Square s;
    s.getLength();
    s.printArea();
    s.printPerimeter();
    return 0; 
}
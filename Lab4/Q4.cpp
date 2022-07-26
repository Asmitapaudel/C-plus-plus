 /* Create a class to print the area of a square and a rectangle. The class has two functions with the
 same name but different number of parameters. The function for printing the area of rectangle has two 
 parameters which are its length and breadth respectively while the other function for printing the area
  of square has one parameter which is the side of the square*/
#include<iostream>
using namespace std;
class Area{
    int length,breadth;
    public:
    Area(int l){
        length=l;
        cout<<"Area of Square= "<<l*l<<endl;
    }
    Area(int l , int b){
        length=l;
        breadth=b;
         cout<<"Area of Rectangle= "<<l*b<<endl;
    }
};
int main(){
    Area square(20),rectangle(20,40);
    return 0;
}
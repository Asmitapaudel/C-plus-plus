/* A Class room consists of two field length and breadth and method int area() to Find the area of room .
A new class Bedroom is derived from class  Room and consist of additional field height and two methods
setData(int ,int ,int) to set the value for three fields and int Volume() to find the volume.Now write
the c++ program to input the length ,breadth and height and find the area and volume */
#include<iostream>
using namespace std;
class Room{
    int length;
    int breadth;
    public:
    // void setData(){
    //     cout<<"Enter Length and Breadth of the room:"<<endl;
    //     cin>>length>>breadth;
    // }
    int getLength(){
        return length;
    }
    void setLength(int l){
        length=l;
    }
    int getBreadth(){
        return breadth;
    }
     void setBreadth(int b){
        breadth=b;
    }
     int Area(){
     return length*breadth;
    }

};
class BedRoom: public Room{
    int height;
    public:
     void setData(int l,int b, int h){
         setLength(l);
         setBreadth(b);
         height= h;
        // cout<<"Enter height:"<<endl;
        // cin>>height;
    }
    int volume(){
        return Area()*height;
    }

};
int main (){
    BedRoom B;
    B.setData(10,20,15);
    cout<<"Volume:"<<endl<<B.volume();
    return 0;
}
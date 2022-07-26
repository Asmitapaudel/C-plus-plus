/* WAP to add two objects each having private data members feet and inches. */
#include<iostream>
using namespace std;
// class Two;
class One{
    int feet,inches;

    public:
    void getdata(){
        cout<<"Enter feet and inches:"<<endl;
        cin>>feet>>inches;
    }

    friend void sum(One,One);
};

// class Two{
//      int feet,inches;

//     public:
//     void getdata(){
//         cout<<"Enter feet and inches:"<<endl;
//         cin>>feet>>inches;
//         }

//         friend void sum(One,Two);
// };

 void sum(One O1,One O2){
    int fsum,isum;
    fsum=O1.feet+O2.feet;
    isum=O1.inches+O2.inches;
    if(isum>12){
        fsum=fsum+(isum/12);
        isum=isum%12;
    }
    cout<<"Sum of feets and inches of two classes is:"<<endl<<fsum<<" feet "<<" & "<<isum<<" inches "<<endl;

    }

int main(){
    One x,y;
    x.getdata();
    y.getdata();
    sum(x,y);
    return 0;
}
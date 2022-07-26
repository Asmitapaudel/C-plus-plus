//Create a template function to swap two values.
#include <iostream> 
using namespace std; 
template<class T >
void swap( T *fn, T *sn ) {
    T tmp;
     tmp=*fn;
      *fn=*sn;
       *sn=tmp;
}
int main() {
    int m=5,n=6;
    cout<<"Before swapping"<<endl;
     cout<<"M= "<<m<<endl<<"N= "<<n<<endl; 
     swap(&m,&n);
    cout<<"After swapping"<<endl;
    cout<<"M= "<<m<<endl<<"N= "<<n<<endl;
    return 0;
}

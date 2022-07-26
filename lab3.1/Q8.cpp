/* WAP that includes non-static data member, static data member and static member function. */
#include<iostream>
using namespace std;
class test
{
    int x; // non static data member in private
    // static int a;    // static data member in private
public:
    static int a;    // static data member in public

    test()
    { // constructor to play with class values
        a++;
    }
    static int gettest()
    { // static memeber function
        return a;
    }
};
int test::a = 0;
int main(){
    cout << "Initial value of a = " << test::a<<endl; // we cant directly access the static member function because its private
    test t1, t2; // objects
    cout << "Number of objects: " << test::a;
    // cout << "Initial value of x = " << <<endl;
    return 0;
}
/* Write a program to find the sum and difference of any two complex numbers by overloading '+' and '-'
 operator */
#include<iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(int r , int i) {
    real = r;
    imag = i; 
    }
    // This is automatically called when '+' is used with between twoComplex objects
    Complex operator + (Complex obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag; 
        return res;
    }
    //  Complex operator -(Complex obj) {
    //     Complex res;
    //     res.real = real - obj.real;
    //     res.imag = imag - obj.imag; 
    //     return res;
    // }
    void print() {
    cout << real << " + i" << imag << endl;
     }
};
int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+" c3.print();
    // Complex c4 = c1-c2;
    c3.print();
    // c4.print();
    return 0;
}

//WAP to add two complex number using the concept of constructor
#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    Complex() {}
    Complex(int r, int i) {
            real = r;
            imaginary = i;
        }
    friend void sum(Complex, Complex);
};
void sum(Complex c1, Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    cout << "The sum of two complex numbers is=" << c3.real << "+" << c3.imaginary << "i" << endl;
}
int main(){
    Complex c1(2, 3), c2(3, 2);
    sum(c1, c2);
    return 0;
}
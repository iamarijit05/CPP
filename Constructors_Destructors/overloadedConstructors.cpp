#include<bits/stdc++.h>
using namespace std;

class Complex {
    float x, y;
    public:
        Complex() {} // no arg
        Complex(float a) { x = y = a; } // one arg
        Complex(float real, float imag) { x = real; y = imag; } // two args

        friend Complex sum(Complex, Complex);
        friend void show(Complex);
};

Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}

void show(Complex c) {
    cout << c.x << " + " << c.y <<"j" << endl;
}

int main() {
    Complex A(2.7, 5.4);
    Complex B(2.6);
    Complex C;

    C = sum(A, B);
    cout << "A: "; show(A);
    cout << "B: "; show(B);
    cout << "C: "; show(C);
}
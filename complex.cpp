#include "Complex.h"

// ===== Constructors =====
Complex::Complex() : real(0), imag(0) {}

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex::Complex(const Complex& c) : real(c.real), imag(c.imag) {}

// Destructor
Complex::~Complex() {}

// ===== Getters =====
double Complex::getReal() const { return real; }
double Complex::getImag() const { return imag; }

// ===== Setters =====
void Complex::setReal(double r) { real = r; }
void Complex::setImag(double i) { imag = i; }

// ===== Operator Overloading =====
Complex Complex::operator+(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex& c) const {
    return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
}

Complex Complex::operator/(const Complex& c) const {
    double denominator = c.real*c.real + c.imag*c.imag;
    return Complex((real*c.real + imag*c.imag)/denominator,
                   (imag*c.real - real*c.imag)/denominator);
}

Complex& Complex::operator=(const Complex& c) {
    if(this != &c) {
        real = c.real;
        imag = c.imag;
    }
    return *this;
}

bool Complex::operator==(const Complex& c) const {
    return real == c.real && imag == c.imag;
}

bool Complex::operator!=(const Complex& c) const {
    return !(*this == c);
}

// ===== Print =====
void Complex::print() const {
    cout << real;
    if(imag >= 0) cout << "+";
    cout << imag << "i" << endl;
}

// ===== Friend << =====
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real;
    if(c.imag >= 0) os << "+";
    os << c.imag << "i";
    return os;
}

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double real; 
    double imag; 

public:
    // Constructors
    Complex();                       
    Complex(double r, double i);     
    Complex(const Complex& c);       

    // Destructor
    ~Complex();

    // Getters
    double getReal() const;
    double getImag() const;

    // Setters
    void setReal(double r);
    void setImag(double i);

    // Operator Overloading
    Complex operator+(const Complex& c) const;
    Complex operator-(const Complex& c) const;
    Complex operator*(const Complex& c) const;
    Complex operator/(const Complex& c) const;

    Complex& operator=(const Complex& c);
    bool operator==(const Complex& c) const;
    bool operator!=(const Complex& c) const;

    // Print
    void print() const;

    // Friend for << operator
    friend ostream& operator<<(ostream& os, const Complex& c);
};

#endif

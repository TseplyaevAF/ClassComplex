#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

	float re, im;

public:

	Complex();
	Complex(float r, float i);
	Complex operator + ( const Complex& b);
	Complex operator * (const Complex& b);
	Complex operator - (const Complex& b);
	Complex operator / (const Complex& b);
	void display();
};

#endif
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

	float re, im;

public:

	Complex();
	Complex(float r, float i);
	// На комплексное..
	Complex operator + ( const Complex& b);
	Complex operator * (const Complex& b);
	Complex operator - (const Complex& b);
	Complex operator / (const Complex& b);
	//..число

	//На вещественное..
	Complex operator + (double b);
	Complex operator * (double b);
	Complex operator - (double b);
	Complex operator / (double b);
	//..число
	void display();
};

#endif
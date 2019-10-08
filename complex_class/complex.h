#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

	float re, im;

public:

	Complex();
	Complex(float r, float i);
	Complex plus(const Complex& b);
	Complex mul(const Complex& b);
	void display();
};

#endif
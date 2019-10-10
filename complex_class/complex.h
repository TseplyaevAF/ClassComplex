#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

	float re, im;

public:

	Complex();
	Complex(float r, float i);
	// �� �����������..
	Complex operator + ( const Complex& b);
	Complex operator * (const Complex& b);
	Complex operator - (const Complex& b);
	Complex operator / (const Complex& b);
	//..�����

	//�� ������������..
	Complex operator + (double b);
	Complex operator * (double b);
	Complex operator - (double b);
	Complex operator / (double b);
	//..�����
	void display();
};

#endif
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

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
	Complex operator + (double b) const;
	Complex operator * (double b) const;
	Complex operator - (double b) const;
	Complex operator / (double b) const;
	//..�����

	//����� � �������
	void display() const;

	//���������� ������ ������������ �����
	double moduleComplex() const;

	//���������� ��������� ������������ �����
	double argumentComplex() const;

	//������� ������������ ����� � ������
	std::string toString() const;
};

#endif
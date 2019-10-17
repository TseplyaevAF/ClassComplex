#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

// ����������� �����
class Complex {

	float re, im;

public:
	static const short ZeroDiv = -1;

	//����������� �� ���������
	Complex();
	//����������� ��������������
	Complex(float r, float i);

	//�� �����������..
	Complex operator + ( const Complex& b) const;
	Complex operator * (const Complex& b) const;
	Complex operator - (const Complex& b) const;
	Complex operator / (const Complex& b) const;
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
	double abs() const;

	//���������� ��������� ������������ �����
	double arg() const;

	//������� ������������ ����� � ������
	std::string toString() const;

	//�������� ���������..
	bool operator == (const Complex& a);
	bool operator <= (const Complex& a);
	bool operator >= (const Complex& a);
	bool operator != (const Complex& a);
	bool operator < (const Complex& a);
	bool operator > (const Complex& a);
	//.. ��� ������������ �������


	// ������ ��� ���� re
	float getRe() const;

	// ������ ��� ���� im
	float getIm() const;
};

#endif
#include "complex.h"
#include <iostream>

using namespace std;

//����������� � ���. ����������
Complex::Complex() {
	re = 1;
	im = 2;
}

//����������� �� ���������
Complex::Complex(float r, float i)
{
	re = r;
	im = i;
}

//�������� �����������
	Complex Complex::operator + (const Complex& b) {
	Complex result;
	result.im = this->im + b.im;
	result.re = this->re + b.re;
	return result;
}

//��������� �����������
	Complex Complex::operator - (const Complex& b) {
	Complex result;
	result.im = this->im - b.im;
	result.re = this->re - b.re;
	return result;
}

//��������� �����������
	Complex Complex::operator * (const Complex& b) {
	Complex result;
	result.re = re * b.re - im * b.im;
	result.im = b.im * re + im * b.re;
	return result;
}

//������� �����������
	Complex Complex::operator / (const Complex& b) {
		if ((b.im == 0) && (b.re == 0))
			throw -1; else {
			Complex result;
			result.re = (re * b.re + im * b.im) / (b.re * b.re + b.im * b.im);
			result.im = (b.re * im - re * b.im) / (b.re * b.re + b.im * b.im);
			return result;
		}
}

	//�������� c ������������ ������
	Complex Complex::operator + (double b) {
		Complex result;
		result.re = re + b;
		result.im = im;
		return result;
	}

	//��������� �� ������������� �����
	Complex Complex::operator - (double b) {
		Complex result;
		result.re = re - b;
		result.im = im;
		return result;
	}

	//��������� �� ������������ �����
	Complex Complex::operator * (double b) {
		Complex c;
		c.re = re * b;
		c.im = im * b;
		return c;
	}

	//������� �� ������������ �����
	Complex Complex::operator / (double b) {
		Complex c;
		c.re = (re * b) / (b * b);
		c.im = (b * im) / (b * b);
		return c;
	}

//����� ����������
void Complex::display() {
	if (im > 0)
		cout << re << "+" << im << "i" << endl;
	else cout << re << im << "i" << endl;
}
#include "complex.h"
#include <iostream>

using namespace std;

//конструктор с нач. значениями
Complex::Complex() {
	re = 1;
	im = 2;
}

//конструктор по умолчанию
Complex::Complex(float r, float i)
{
	re = r;
	im = i;
}

//сложение
	Complex Complex::operator + (const Complex& b) {
	Complex result;
	result.im = this->im + b.im;
	result.re = this->re + b.re;
	return result;
}

//умножение
	Complex Complex::operator - (const Complex& b) {
	Complex result;
	result.im = this->im - b.im;
	result.re = this->re - b.re;
	return result;
}

//умножение
	Complex Complex::operator * (const Complex& b) {
	Complex result;
	result.re = re * b.re - im * b.im;
	result.im = b.im * re + im * b.re;
	return result;
}

//деление
	Complex Complex::operator / (const Complex& b) {
	Complex result;
	result.re = (re * b.re + im * b.im) / (b.re*b.re + b.im * b.im);
	result.im = (b.re * im - re * b.im) / (b.re * b.re + b.im * b.im);
	return result;
}

//Вывод результата
void Complex::display() {
	if (im > 0)
		cout << re << "+" << im << "i" << endl;
	else cout << re << im << "i" << endl;
}
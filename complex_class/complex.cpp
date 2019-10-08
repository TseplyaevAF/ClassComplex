#include "complex.h"
#include <iostream>

using namespace std;

//конструктор с нач. значени€ми
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
	Complex Complex::plus(const Complex& b) {
	Complex result;
	result.im = this->im + b.im;
	result.re = this->re + b.re;
	return result;
}

//умножение
	Complex Complex::mul(const Complex& b) {
	Complex result;
	result.re = this->re * b.re - this->im * b.im;
	result.im = b.im * this->re - this->im * b.re;
	return result;
}

//¬ывод результата
void Complex::display() {
	if (im > 0)
		cout << re << "+" << im << "i" << endl;
	else cout << re << im << "i" << endl;
}
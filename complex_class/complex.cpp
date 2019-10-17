#include "complex.h"
#include <iostream>

using namespace std;

float Complex::getRe() const {
	return re;
}

float Complex::getIm() const {
	return im;
}

//конструктор по умолчанию
Complex::Complex() {
	re = 1;
	im = 2;
}

//конструктор преобразования
Complex::Complex(float r, float i)
{
	re = r;
	im = i;
}

//сложение комплексных
	Complex Complex::operator + (const Complex& b) const {
	Complex result;
	result.im = this->im + b.im;
	result.re = this->re + b.re;
	return result;
}

//вычитание комплексных
	Complex Complex::operator - (const Complex& b) const {
	Complex result;
	result.im = this->im - b.im;
	result.re = this->re - b.re;
	return result;
}

//умножение комплексных
	Complex Complex::operator * (const Complex& b) const {
	Complex result;
	result.re = re * b.re - im * b.im;
	result.im = b.im * re + im * b.re;
	return result;
}

//деление комплексных
	Complex Complex::operator / (const Complex& b) const {
		if ((b.im == 0) && (b.re == 0))
			throw ZeroDiv; else {
			Complex result;
			result.re = (re * b.re + im * b.im) / (b.re * b.re + b.im * b.im);
			result.im = (b.re * im - re * b.im) / (b.re * b.re + b.im * b.im);
			return result;
		}
}

	//сложение c вещественным числом
	Complex Complex::operator + (double b) const {
		Complex result;
		result.re = re + b;
		result.im = im;
		return result;
	}

	//вычитание из вещественного числа
	Complex Complex::operator - (double b) const {
		Complex result;
		result.re = re - b;
		result.im = im;
		return result;
	}

	//умножение на вещественное число
	Complex Complex::operator * (double b) const {
		Complex c;
		c.re = re * b;
		c.im = im * b;
		return c;
	}

	//деление на вещественное число
	Complex Complex::operator / (double b) const {
		if (b == 0)
			throw - 1; else {
			Complex c;
			c.re = (re * b) / (b * b);
			c.im = (b * im) / (b * b);
			return c;
		}
	}

//Вывод в консоль
void Complex::display() const {
	if (im > 0)
		cout << re << "+" << im << "i" << endl;
	else cout << re << im << "i" << endl;
}

//Вычисление модуля комплексного числа
double Complex::abs() const {
		double r = 0;
		return r = sqrt(pow(re, 2) + pow(im, 2));
}

//Нахождение аргумента комплексного числа
	double Complex::arg() const {
		double argZ = 0;
		return argZ = atan(im / re);
	}

//Перевод комплексного числа в строку
	string Complex::toString() const {
		string str;
		string str1 = to_string(re);
		string str2 = to_string(im);
		if (im < 0)
		str = str1 + str2 + "i"; else
			str = str1 + "+" + str2 + "i";
		return str;
	}

	//Оператор сравнения комплексных чисел
	bool Complex::operator ==(const Complex& a) {
		if ((re == a.re) && (im == a.im))
			return 1; else return 0;
	}

	bool Complex::operator <=(const Complex& a) {
		if ((re <= a.re) && (im <= a.im))
			return 1; else return 0;
	}

	bool Complex::operator >=(const Complex& a) {
		if ((re >= a.re) && (im >= a.im))
			return 1; else return 0;
	}

	bool Complex::operator !=(const Complex& a) {
		if ((re != a.re) && (im != a.im))
			return 1; else return 0;
	}

	bool Complex::operator <(const Complex& a) {
		if ((re < a.re) && (im < a.im))
			return 1; else return 0;
	}

	bool Complex::operator >(const Complex& a) {
		if ((re > a.re) && (im > a.im))
			return 1; else return 0;
	}
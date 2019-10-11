#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

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
	Complex operator + (double b) const;
	Complex operator * (double b) const;
	Complex operator - (double b) const;
	Complex operator / (double b) const;
	//..число

	//Вывод в консоль
	void display() const;

	//Вычисление модуля комплексного числа
	double moduleComplex() const;

	//Нахождение аргумента комплексного числа
	double argumentComplex() const;

	//Перевод комплексного числа в строку
	std::string toString() const;
};

#endif
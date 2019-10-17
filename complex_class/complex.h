#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

// Комплексное число
class Complex {

	float re, im;

public:
	static const short ZeroDiv = -1;

	//Конструктор по умолчанию
	Complex();
	//Конструктор преобразования
	Complex(float r, float i);

	//На комплексное..
	Complex operator + ( const Complex& b) const;
	Complex operator * (const Complex& b) const;
	Complex operator - (const Complex& b) const;
	Complex operator / (const Complex& b) const;
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
	double abs() const;

	//Нахождение аргумента комплексного числа
	double arg() const;

	//Перевод комплексного числа в строку
	std::string toString() const;

	//Операции сравнения..
	bool operator == (const Complex& a);
	bool operator <= (const Complex& a);
	bool operator >= (const Complex& a);
	bool operator != (const Complex& a);
	bool operator < (const Complex& a);
	bool operator > (const Complex& a);
	//.. над комплексными числами


	// Геттер для поля re
	float getRe() const;

	// Геттер для поля im
	float getIm() const;
};

#endif
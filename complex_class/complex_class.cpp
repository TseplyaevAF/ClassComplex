#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

int main()
{
	double x = 4;

	setlocale(0, "RUS");
	Complex a(2, 5);
	Complex b(3, -1);

	Complex c = a + b;
	cout << "Результат сложения:";
	c.display();
	c = a * b;
	cout << "Результат умножения:";
	c.display();

	c = a - b;
	cout << "Результат вычитания:";
	c.display();
	try {
		c = a / b;
		cout << "Результат деления:";
		c.display();
	}
	catch (int e) {
		if (e == -1)
			cout << "Неправильный аргумент";
	}

	c = a + x;//сложение c вещественным
	c = a - x;//вычитание из вещественного
	c = a * x;//умножение на вещественное
	try {
		c = a / x;// деление на вещественное
	}
	catch (int e) {
		if (e == -1)
			cout << "Неправильный аргумент";
	}

	double r = a.moduleComplex();//вычислить модуль комплексного числа

	double arg = a.argumentComplex();//найти аргумент комплексного числа

	string str = b.toString();//число в строку

	bool result = (a == b); //Сравниваем два комплексных чисел

	if (result) cout << "числа равны"; else cout << "числа не равны";

	return 0;
}
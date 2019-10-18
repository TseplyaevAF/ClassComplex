#include <iostream>
#include <math.h>
#include <vector>
#include "work_file.h"
#include "complex.h"

using namespace std;

int main() {
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
	} catch (int e) {
		if (e == Complex::ZeroDiv)
			cout << "Знаменатель равен нулю!";
	}

	c = a + x;//сложение c вещественным
	c = a - x;//вычитание из вещественного
	c = a * x;//умножение на вещественное
	try {
		c = a / x;// деление на вещественное
	} catch (int e) {
		if (e == Complex::ZeroDiv)
			cout << "Знаменатель равен нулю!";
	}

	double r = a.abs();//вычислить модуль комплексного числа

	double arg = a.arg();//найти аргумент комплексного числа

	string str = b.toString();//число в строку

	bool result = (a == b); //Сравниваем два комплексных чисел

	vector <Complex> elArray; //Объявление массива из объектов
	unsigned n = 3; //Размер массива

	// Добавление объектов в динамический массив
	for (unsigned i = 0; i < n; i++) {
		Complex num(rand() % 24 - 12, rand() % 24 - 12);
		elArray.push_back(num);
	}

	string filename = "complex.txt";
	object2file(filename, n); //Запись в файл
	elArray = read_file(filename); //Загрузка из файла

	Complex* d = memoArray(n);
	d = initArray(n, d);
	delete[] d;

	cout << endl;

	// Массив указателей на объекты класса
	vector<Complex*> mass;
	for (unsigned i = 0; i < n; i++) {
		Complex* p = new Complex(2*i, i);
		mass.push_back(p);
		p->display();
	}

	//Очищение памяти
	for (unsigned i = 0; i < mass.size(); i++) {
		delete mass[i];
	}

	system("pause");

	return 0;
}
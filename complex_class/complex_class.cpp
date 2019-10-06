#include <iostream>
#include <math.h>

using namespace std;

class Complex {
	
	float re, im;

public:
	//конструктор с нач. значениями
	Complex() {
		re = 1;
		im = 2;
	}

	//конструктор по умолчанию
	Complex(float r, float i)
	{
		re = r;
		im = i;
	}

	//сложение
	Complex plus(const Complex& b) {
		Complex result;
		result.im = this->im + b.im;
		result.re = this->re + b.re;
		return result;
	}

	//умножение
	Complex mul(const Complex& b) {
		Complex result;
		result.re = this->re * b.re - this->im * b.im;
		result.im = b.im * this->re - this->im * b.re;
		return result;
	}

	//Вывод результата
	void display() {
		if (im > 0)
			cout << re << "+" << im << "i" << endl;
		else cout << re << im << "i" << endl;
	}
};

int main()
{
	setlocale(0, "RUS");
	Complex a(2, 0);
	Complex b(3, -1);

	Complex c = a.plus(b);
	cout << "Результат сложения:";
	c.display();
			c = a.mul(b);
	cout << "Результат умножения:";
	c.display();

	return 0;
}
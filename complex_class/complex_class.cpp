#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;



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
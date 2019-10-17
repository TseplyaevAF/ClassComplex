#include "work_file.h"
#include <fstream>
#include <iostream>

//������ ��������� �������� � ����
void object2file(const Complex& a, std::string filename, unsigned n) {
	std::ofstream out(filename);
	float re, im; std::string str;
	for (int i = 0; i < n; i++)
	{
		re = rand() % 24 - 12;
		im = rand() % 40 - 9;
		Complex a(re, im);
		out << a.getRe();
		if (a.getIm() > 0)
			out << "+";
		out << a.getIm() << std::endl;
		/*str = a.toString();//����� � ������
		out << str << std::endl;*/
	}
	out.close();
}

//������� �������� ����� � �����
unsigned number_of_lines(std::string filename, unsigned sum) {
	std::string line;
	std::ifstream f(filename);
	while (!f.eof()) {
		getline(f, line);
		sum++;
	}
	return sum;
}

//�������� ��������� �������� �� �����
std::vector<Complex> read_file(std::string filename) {
	float re, im;
	int i = 0; float number; unsigned sum = 0;
	sum = number_of_lines(filename, sum);
	std::vector <Complex> v;
	std::ifstream in(filename);
	for (unsigned i = 1; i <= sum-1; i++) {
		in >> re >> im;
		Complex a(re, im);
		v.push_back(a);
	}
	in.close();
	return v;
}

//��������� ������ ��� ������ ��������
Complex* memoArray(unsigned n) {
	Complex* complexNum = new Complex[n];
	return complexNum;
}

//������������� ������� ��������
Complex* initArray(unsigned n, Complex* complexNum) {
	for (unsigned i = 0; i < n; i++)
	{
		complexNum[i] = Complex(i, 2 * i);
	}
	return complexNum;
};
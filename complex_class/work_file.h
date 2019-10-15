#pragma once
#include "complex.h"
#include "vector"

//������ ��������� �������� � ����
void object2file(const Complex& a, std::string filename, unsigned n);

//�������� ��������� �������� �� �����
std::vector<Complex> read_file(std::string filename);

//������� �������� ����� � �����
unsigned number_of_lines(std::string filename, unsigned sum);
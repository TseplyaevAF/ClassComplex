#pragma once
#include "complex.h"
#include "vector"

//������ ��������� �������� � ����
void object2file(std::string filename, unsigned n);

//�������� ��������� �������� �� �����
std::vector<Complex> read_file(std::string filename);

//������� �������� ����� � �����
unsigned number_of_lines(std::string filename, unsigned sum);

//��������� ������ ��� ������ ��������
Complex* memoArray(unsigned n);

//������������� ������� ��������
Complex* initArray(unsigned n, Complex* complexNum);
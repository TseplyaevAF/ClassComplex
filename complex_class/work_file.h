#pragma once
#include "complex.h"
#include "vector"

//Запись состояний объектов в файл
void object2file(const Complex& a, std::string filename, unsigned n);

//Загрузка состояний объектов из файла
std::vector<Complex> read_file(std::string filename);

//функция подсчета строк в файле
unsigned number_of_lines(std::string filename, unsigned sum);
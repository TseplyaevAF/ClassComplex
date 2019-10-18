#pragma once
#include "complex.h"
#include "vector"

//Запись состояний объектов в файл
void object2file(std::string filename, unsigned n);

//Загрузка состояний объектов из файла
std::vector<Complex> read_file(std::string filename);

//функция подсчета строк в файле
unsigned number_of_lines(std::string filename, unsigned sum);

//Выделение памяти под массив объектов
Complex* memoArray(unsigned n);

//Инициализация массива объектов
Complex* initArray(unsigned n, Complex* complexNum);
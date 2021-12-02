// Lab5v10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//5.Для каждого варианта (табл. 2) разработать шаблон соответствующего класса, 
// где поля могут иметь различные типы данных (некоторые поля могут быть статическими). 
// Предусмотреть наличие в классе указанных методов и перегруженных операций
// 
// Матрица
// поля:	
// Две размерности, указатель на элементы
// методы:
// Вывести на экран, 
// найти максимум и среднее значение элементов	
// перегружаемые операции:
// + (сложение двух матриц), 
// < (каждый элемент первой матрицы меньше соответствующего элемента второй)


#include <iostream>
#include "Array.inl"
#include "Array.h"

int main()
{
    std::cout << "Hello World!\n";
	Array<int> intArray(10);
	Array<double> doubleArray(10);

	for (int count = 0; count < intArray.getLength(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}

	for (int count = intArray.getLength() - 1; count >= 0; --count)
		std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';

	return 0;

}


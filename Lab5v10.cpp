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
// найти максимум 
// и среднее значение элементов	
// перегружаемые операции:
// + (сложение двух матриц), 
// < (каждый элемент первой матрицы меньше соответствующего элемента второй)


#include <iostream>
#include "Array.inl"
#include "Array.h"

int main()
{
	Array<int> intArray(2,2);
	intArray.viewArray();
	int maxEl = intArray.getMaxElement();
	std::cout << "maxEl = " << maxEl << std::endl;
	double aver = intArray.average();
	std::cout << "aver = " << aver << std::endl;

	Array<int> intArray1(2, 2);
	intArray1.viewArray();

	Array<int> intArray2(intArray + intArray1);
	//Array<double> doubArray(2, 2);
	//doubArray.viewArray();


	/*intArray->arrayData = new int* [intArray.getSizeRows()];
	for (int count1 = 0; count1 < intArray.getSizeRows(); count1++)
	{
		intArray[count1] = new int [intArray.getSizeColumns()];
	
	}*/
	
	/*Array<int> intArray(10);
	Array<double> doubleArray(10);

	for (int count = 0; count < intArray.getLength(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}

	for (int count = intArray.getLength() - 1; count >= 0; --count)
		std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';*/

	return 0;

}


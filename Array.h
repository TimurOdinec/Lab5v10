#pragma once
#include <assert.h> // для assert()
#include <cstdlib> // для функций rand() и srand()
#include <iostream>

template <class T>
class Array
{
private:
    int sizeRows;
    int sizeColumns;
    T **arrayData;

public:
    Array()
    {
        sizeRows = 0;
        sizeColumns = 0;
        arrayData = nullptr;
    }
    Array(T** arr)
    {
        Array<T>::sizeRows = arr.getSizeRows();
        Array<T>::sizeColumns = arr.getSizeColumns();
        Array<T>::arrayData = arr;
    }
    Array(int sizeRows, int sizeColumns)
    {
        Array<T>::sizeRows = sizeRows;
        Array<T>::sizeColumns = sizeColumns;
        Array<T>::arrayData = new T* [sizeRows];
        for (int count = 0; count < sizeRows; count++)
        {
            arrayData[count] = new T[sizeColumns];
        }
        for (int i = 0; i < sizeRows; i++)
        {
            for (int j = 0; j < sizeColumns; j++)
            {
                std::cout << "a[" << i << "][" << j << "]=";
                std::cin >> arrayData[i][j];
            }
        }
    }
    Array(const Array& objArr)
    {
        //std::cout << "constructor copy run" << std::endl;
        Array::sizeRows = objArr.countRows;
        Array::sizeColumns = objArr.countColumns;
        Array::arrayData = NULL;
        if (objArr.arrayData)
        {
            arrayData = new int* [sizeRows];
            for (int count = 0; count < sizeRows; count++)
            {
                arrayData[count] = new int[sizeColumns];
            }

            for (int i = 0; i < sizeRows; i++)
            {
                for (int j = 0; j < sizeColumns; j++)
                {
                    arrayData[i][j] = objArr.arrayData[i][j];
                }
            }
        }
    }
    T getElement(int, int);
    int getSizeColumns();
    int getSizeRows();
    void viewArray();
    T getMaxElement();
    T average();
    Array operator+(Array&);
    
    ~Array()
    {
        for (int i = 0; i < sizeRows; i++)
        {
            delete[] arrayData[i];
        }
        delete[] arrayData;
    }
 
};


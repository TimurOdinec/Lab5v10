#include "Array.h"

template <typename T>
T Array<T>::getElement(int sR, int sC)
{
    return this->arrayData[sR][sC];
}
template <typename T>
int Array<T>::getSizeRows()
{
	return sizeRows;
}
template <typename T>
int Array<T>::getSizeColumns()
{
	return sizeColumns;
}
template <typename T>
void Array<T>::viewArray()
{
    for (int i = 0; i < sizeRows; i++)
    {
        for (int j = 0; j < sizeColumns; j++)
        {
            std::cout << " " << (T)arrayData[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
template <typename T>
T Array<T>::getMaxElement()
{
    T maxEl = arrayData[0][0];
    for (int i = 0; i < sizeRows; i++)
    {
        for (int j = 0; j < sizeColumns; j++)
        {
            if (arrayData[i][j] > maxEl)
            {
                maxEl = arrayData[i][j];
            }
        }
    }
    return maxEl;
}
template <typename T>
T Array<T>::average()
{
    T sum = 0;
    for (int i = 0; i < sizeRows; i++)
    {
        for (int j = 0; j < sizeColumns; j++)
        {
            sum += arrayData[i][j];
        }
    }
    T result = sum / (sizeRows * sizeColumns);
    return result;
}
template <typename T>
Matrix Matrix::operator+(const Matrix& n)
{
    Matrix result(*this);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.aMas[i][j] += n.aMas[i][j];
        }
    }
    return result;
}
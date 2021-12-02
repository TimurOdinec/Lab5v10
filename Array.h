#pragma once
#include <assert.h> // ��� assert()

template <class T>
class Array
{
private:
    int m_length;
    T* m_data;

public:
    Array()
    {
        m_length = 0;
        m_data = nullptr;
    }

    Array(int length)
    {
        m_data = new T[length];
        m_length = length;
    }

    ~Array()
    {
        delete[] m_data;
    }

    void Erase()
    {
        delete[] m_data;
        // ����������� �������� nullptr ��� m_data, ����� �� ������ �� �������� ������� ���������!
        m_data = nullptr;
        m_length = 0;
    }


    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // ����� ������� ������ �������� ������������� ���������, ��� �� ������� �� ���� ��������� �������
    int getLength();

};


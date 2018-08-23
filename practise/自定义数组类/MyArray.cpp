#include <iostream>
#include "MyArray.h"
using namespace std;

MyArray::MyArray(int len)
{
    if (len < 0)
    {
        this->_len = 0;
        return;
    }
    else
    {
        this->_len = len;
        this->_space = new int[this->_len];
    }
}

MyArray::~MyArray()
{
    if (this->_space != NULL)
    {
        delete this->_space;
    }
}
MyArray::MyArray(const MyArray &another)
{
    this->_len = another._len;
    this->_space = new int[another._len];

    for (size_t i = 0; i < this->_len; i++)
    {
        this->_space[i] = another._space[i];
    }
    cout << "MyArray(const MyArray &another)" << endl;
}

void MyArray::setData(int index, int data)
{
    this->_space[index] = data;
}
int MyArray::getData(int index)
{
    return this->_space[index];
}
int MyArray::getLen()
{
}
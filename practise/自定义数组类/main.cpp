#include <iostream>
#include <windows.h>
#include "MyArray.h"

using namespace std;

int main()
{

    MyArray array1(10);

    for (size_t i = 0; i < 10; i++)
    {
        array1.setData(i, i + 10);
    }
    cout << "-----------------" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << array1.getData(i) << endl;
    }

    MyArray array2 = array1;
    cout << "-----------------" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        array2.setData(i, i + 10);
    }
    cout << "-----------------" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << array2.getData(i) << endl;
    }
    MyArray array3(20);
    array3 = array1;
    cout << "-----------------" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        array3.setData(i, i + 10);
    }
    cout << "-----------------" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << array3.getData(i) << endl;
    }
    system("pause");
    return 0;
}

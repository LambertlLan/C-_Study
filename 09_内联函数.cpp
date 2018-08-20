#include <iostream>
using namespace std;
inline void printAB(int a, int b)
{
    //减少程序入栈出栈
    cout << "a = " << a << "b = " << b << endl;
}
int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    for (size_t i = 0; i < 1000; i++)
    {
        a++;
        b++;
        printAB(a, b);
        //inline函数再预处理阶段会展开成
        //从而减少程序入栈出栈
        //但是如果其中判断和循环过多,不会展开
        //{
        //cout << "a = " << a << "b = " << b << endl;
        //}
    }
    return 0;
}

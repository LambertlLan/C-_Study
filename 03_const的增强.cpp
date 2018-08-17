#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int a = 10;   //a是真正的常量,存放在符号表,不会返回a的地址
    int *p = (int *)&a; //会临时生成一个内存temp,并是p中存放temp中的地址,故改变的temp的值,而非a的值

    *p = 20;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    system("pause");
    return 0;
}

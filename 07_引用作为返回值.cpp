#include <iostream>

int a = 10;

int &test()
{
    static int b = 100;
    return b;
}

int main(int argc, char const *argv[])
{
    int &p = test();
    p = 555;
    std::cout << "p = " << p << std::endl;
    system("pause");
    return 0;
}

#include <iostream>

int main(int argc, char const *argv[])
{
    enum MyEnum
    {
        SRP,
        SUM,
        AUT,
        WIN
    };
    enum MyEnum s = SRP; //c++此处只能为枚举中的变量,不能为0,1,2,3;
    if (s == AUT)
    {
    }
    return 0;
}

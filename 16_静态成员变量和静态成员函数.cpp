#include <iostream>
#include <windows.h>

using namespace std;

class AA
{
  public:
    static int _a;
    printA()
    {
        _a++;
        cout << "_a = " << _a << endl;
    }
    static int get_b()
    {
        return _b;
    }

  private:
    static int _b;
};
//类中静态成员变量需要这样赋值
int AA ::_a = 100;
int AA ::_b = 200;
int main()
{
    AA a;
    a.printA(); //返回101
    AA b;
    b.printA(); //返回102
    //因为static 在静态区,不属于类,所以实例化为对象时不会重新生成
    //静态成员变量和静态成员函数不属于任何一个对象
    //可以通过类名直接调用,类似于python
    cout << AA::_a << endl;
    cout << AA::get_b() << endl;
    system("pause");
    return 0;
}

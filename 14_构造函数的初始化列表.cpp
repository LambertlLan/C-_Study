#include <iostream>
#include <windows.h>

using namespace std;
class A
{
  private:
    int m_id;

  public:
    A(int a)
    {
        m_id = a;
    }
    printA()
    {
        cout << "id = " << m_id << endl;
    }
};
class B
{
  private:
    int m_id;
    A m_a1;
    A m_a2;

  public:
    //构造对象成员的顺序跟初始化列表的顺序无关
    //而是与定义顺序有关
    B(int b, A &a1, A &a2) : m_a1(a1), m_a2(a2)
    {
        m_id = b;
    }
    printB()
    {
        cout << "id = " << m_id << endl;
        m_a1.printA();
        m_a2.printA();
    }
};

int main()
{
    A a1(1);
    a1.printA();
    A a2(2);
    a2.printA();
    B b(3, a1, a2);
    b.printB();
    system("pause");
    return 0;
}

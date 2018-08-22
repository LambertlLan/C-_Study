#include <iostream>
#include <windows.h>

using namespace std;

class Test
{
  private:
    int m_x;
    int m_y;

  public:
    Test(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
    printXY()
    {
        cout << "x = " << m_x << " y = " << m_y << endl;
    }
    //显示的拷贝构造函数
    Test(const Test &another)
    {
        cout << "Test (const Test &)" << endl;
        m_x = another.m_x;
        m_y = another.m_y;
    }

}

int
main()
{
    //谁先构造,谁后析构
    Test t1(100, 200);
    Test t2(t1);
    //同样会拷贝构造函数
    Test t3 = t1;
    //讲t1的值赋值给t4,不会调用拷贝构造函数
    Test t4;
    t4 = t1;

    system("pause");
    return 0;
}

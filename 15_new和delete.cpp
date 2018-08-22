#include <iostream>
#include <windows.h>

using namespace std;

void a()
{
    //相当于c中的malloc
    int *a = new int;
    if (a == NULL)
    {
        return;
    }
    *a = 10;
    if (a != NULL)
    {
        delete a;
    }
}
void b()
{
    int *a = new int[10];
    if (a == NULL)
    {
        return;
    }

    if (a != NULL)
    {
        delete[] a;
    }
}

class Test
{
  private:
    int *_a;

  public:
    Test(int a)
    {
        _a = new int;
        *_a = a;
    }
    ~Test()
    {
        if (_a != NULL)
        {
            delete _a;
        }
    }
};

void c()
{
    //在堆上开辟空间,会调用构造函数
    Test *t1 = new Test(1);
    if (t1 != NULL)
    {
        //释放空间,会调用析构函数
        delete t1;
    }
}
int main()
{

    system("pause");
    return 0;
}

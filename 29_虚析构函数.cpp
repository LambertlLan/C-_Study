#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class A
{
  public:
    A()
    {
        this->p = new int;
        *p = 10;
        cout << "A()-------" << endl;
    }
    //虚析构函数
    virtual ~A()
    {
        delete p;
        cout << "~A()-------" << endl;
    }
    virtual void print()
    {
        cout << "i am a----" << endl;
    }

  private:
    int *p;
};
class B : public A
{
  public:
    B()
    {
        this->p = new int;
        *p = 10;
        cout << "B()-------" << endl;
    }
    ~B()
    {
        cout << "~B()-------" << endl;
    }
    void print()
    {
        cout << "i am b----" << endl;
    }

  private:
    int *p;
};
void func(A *p)
{
    p->print(); //此处发生多态
    delete p;   //析构是发生多态,如果A的析构函数不是虚函数,默认只调用A的析构函数
}
void test()
{
    //A *ap = new A;
    //func(ap);
    B *bp = new B;
    func(bp);
}
int main()
{
    test();
    system("pause");
    return 0;
}

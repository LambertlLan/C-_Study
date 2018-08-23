#include <iostream>
#include <windows.h>
#include <memory>

using namespace std;
class A
{
  private:
    int _a;

  public:
    A(int a)
    {
        this->_a = a;
    }
    void print()
    {
        cout << this->_a << endl;
    }
    ~A()
    {
        cout << "~A" << endl;
    }
};
void test()
{
#if 0
    A *p = new A(10);
    p->print();
    delete p;
#endif
    //智能指针,自动回收
    auto_ptr<A> ptr(new A(10));
    ptr->print();
}
int main()
{
    test();
    system("pause");
    return 0;
}

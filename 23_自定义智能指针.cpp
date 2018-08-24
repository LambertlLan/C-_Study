#include <iostream>
#include <windows.h>

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
    printfA()
    {
        cout << "_a = " << this->_a << endl;
    }
    ~A()
    {
        cout << "~A()------------" << endl;
    }
};
class Myptr
{
  public:
    Myptr(A *ptr)
    {
        this->_ptr = ptr;
    }
    ~Myptr()
    {
        if (this->_ptr != NULL)
        {
            delete this->_ptr;
            this->_ptr = NULL;
        }
    }
    A *operator->()
    {
        return this->_ptr;
    }
    A &operator*()
    {
        return *(this->_ptr);
    }

  private:
    A *_ptr;
};
void test()
{
    Myptr my_p(new A(10));
    my_p->printfA();
    (*my_p).printfA();
}
int main()
{
    test();
    system("pause");
    return 0;
}

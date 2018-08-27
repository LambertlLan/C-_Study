#include <iostream>
#include <windows.h>

using namespace std;

class Parent
{
  public:
    Parent(int a)
    {
        cout << "Parent(int ..)" << endl;
        this->a = a;
        point(); //调用此处时,vptr指针先指向父类,在父类构造完毕后再回到子类中,此处调用的是父类指针不建议在构造器中写业务
    }
    virtual void point()
    {
        cout << "Parent::print()...a=" << a << endl;
    }

  private:
    int a;
};
class Child : public Parent
{
  public:
    Child(int a, int b) : Parent(a)
    {
        cout << "Child(int ..)" << endl;
        this->b = b;
        // point();此处子类已经构造,vptr指针已经回到子类中
    }
    virtual void point()
    {
        cout << "Child::print()...b=" << b << endl;
    }

  private:
    int b;
};
int main()
{
    Parent *pp = new Child(1, 2);
    system("pause");
    return 0;
}

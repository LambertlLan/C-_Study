#include <iostream>
#include <windows.h>

using namespace std;

class Parent
{
  public:
    int a;
    int c;
    Parent()
    {
        a = 10;
        cout << "Parent()" << endl;
    }
    Parent(int a)
    {
        this->a = a;
        this->c = a;
        cout << "Parent(a)" << endl;
    }
    ~Parent()
    {
        cout << "~Parent()" << endl;
    }
};
class Childrend : public Parent
{
  public:
    int b;
    int c;
    //如果此处不调用父类有参构造,会自动调用父类无参构造
    Childrend(int a, int b) : Parent(a)
    {
        this->b = b;
        this->c = b;
        cout << "Childrend()" << endl;
    }
    void printC()
    {
        //子类和父类变量重名,默认调子类的变量,父类变量前需要加上父类的类名
        cout << Parent::c << endl;
        cout << this->c << endl;
    }
    ~Childrend()
    {
        cout << "~Childrend()" << endl;
    }
};
void test()
{
    Childrend child(1, 2);
    child.printC();
}
int main()
{
    test();
    //执行结果:
    //Parent(a)
    // Childrend()
    // ~Childrend()
    // ~Parent()
    system("pause");
    return 0;
}

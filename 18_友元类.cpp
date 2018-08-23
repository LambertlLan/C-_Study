#include <iostream>
#include <windows.h>

using namespace std;

class A
{
  public:
    A(int a)
    {
        this->a = a;
    }
    friend class B;

  private:
    int a;
};
class B
{
  public:
    B(A a)
    {
        cout << "a = " << a.a << endl;
    }
};

int main()
{
    A a(100);
    B b(a);
    system("pause");
    return 0;
}

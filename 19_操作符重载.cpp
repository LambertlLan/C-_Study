#include <iostream>
#include <windows.h>

using namespace std;
class Complex
{
  public:
    Complex(int a, int b)
    {
        this->_a = a;
        this->_b = b;
    }
    void printAB()
    {
        cout << this->_a << "+" << this->_b << "i" << endl;
    }
    friend Complex operator+(Complex &a, Complex &b);

  private:
    int _a; //正数
    int _b; //复数
};
//operator后面紧跟操作符
Complex operator+(Complex &a, Complex &b)
{
    Complex c(a._a + b._a, a._b + b._b);
    return c;
}

int main()
{
    Complex a(1, 1);
    a.printAB();
    Complex b(2, 2);
    b.printAB();
    Complex c = a + b;
    c.printAB();
    system("pause");
    return 0;
}

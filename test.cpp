#include <iostream>
#include <windows.h>

using namespace std;

class Parent
{
  public:
    int a;
    Parent()
    {
        a = 10;
    }
};
int main()
{
    Parent p;
    cout << p.a << endl;

    system("pause");
    return 0;
}

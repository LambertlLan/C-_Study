#include <iostream>
#include <windows.h>

using namespace std;
class Student
{
  private:
    int a;

  public:
    Student()
    {
        this->a = 10;
    }
    int operator()(int value)
    {
        return value * value;
    }
};
int main()
{
    Student s1;
    //伪函数
    cout << s1(2) << endl;
    system("pause");
    return 0;
}

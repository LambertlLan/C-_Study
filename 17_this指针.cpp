#include <iostream>
#include <windows.h>

using namespace std;

class Test
{
  private:
    int _id;

  public:
    Test(int id)
    {
        _id = id;
    }
    change(int b)
    {
        this->_id = b;
    }
    changeC(int c) const
    {
        //此处const修饰this指针
    }
    int getC()
    {
        return this->_id;
    }
    //返回对象本身
    Test &add()
    {
        return *this;
    }
};

int
main()
{
    Test t1(1);
    cout << "_id= " << t1.add().getC() << endl;
    system("pause");
    return 0;
}

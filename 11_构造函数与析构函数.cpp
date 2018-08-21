#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Test
{

  private:
    int m_a;
    char *name;

  public:
    Test(int a = 10)
    {
        m_a = a;
    }

    ~Test()
    {
        cout << "~Test-------------" << endl;
        if (name != NULL)
        {
            free(name);
        }
        cout << "free name------------" << endl;
    }

    void printTest()
    {
        name = (char *)malloc(64);
        strcpy(name, "fsdaf");
        cout << "m_a = " << m_a << endl;
        cout << "name = " << name << endl;
    }
};

void a()
{
    Test test(100);
    test.printTest();
}

int main(int argc, char const *argv[])
{
    a();
    system("pause");
    return 0;
}

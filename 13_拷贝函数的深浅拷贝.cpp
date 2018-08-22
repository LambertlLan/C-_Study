#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

class Test
{
  public:
    Test(int id, char *name)
    {
        m_id = id;
        int len = strlen(name);
        m_name = (char *)malloc(len * sizeof(char) + 1);
        strcpy(m_name, name);
        cout << "id = " << m_id << ",name=" << m_name << endl;
    }
    ~Test()
    {
        cout << "~Test()............" << endl;
        if (m_name != NULL)
        {
            free(m_name);
            m_name = NULL;
        }
    }
    Test(const Test &another)
    {
        //深拷贝
        m_id = another.m_id;
        int len = strlen(another.m_name);
        m_name = (char *)malloc(len + 1);
        strcpy(m_name, another.m_name);
        cout << "id = " << m_id << ",name=" << m_name << endl;
    }

  private:
    int m_id;
    char *m_name;
};
void test()
{
    //此处如果为隐式拷贝函数,t2的m_id 和 m_name均为t1的m_id和m_name,释放t2时,堆区的m_name已经被释放,释放t1时会段错误
    Test t1(1, "zhang3");
    Test t2(t1);
}
int main()
{
    test();
    system("pause");
    return 0;
}

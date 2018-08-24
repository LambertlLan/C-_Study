#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

class MyString
{
  public:
    MyString()
    {
        this->len = 0;
        this->str = NULL;
    }

    MyString(const char *str)
    {
        if (str == NULL)
        {
            //空字符串判断
            this->len = 0;
            this->str = new char[0 + 1];
        }
        else
        {
            this->len = strlen(str);
            this->str = new char[len + 1];
            strcpy(this->str, str);
        }
    }

    //拷贝构造,初始化的时候调用
    MyString(const MyString &another)
    {
        this->len = another.len;
        this->str = new char[this->len + 1];
        strcpy(this->str, another.str);
    }

    ~MyString()
    {
        if (this->str != NULL)
        {
            delete this->str;
            this->len = 0;
            this->str = NULL;
        }
    }

    //重载[]
    char &operator[](int index)
    {
        return this->str[index];
    }

    //重载=
    MyString &operator=(const MyString &another)
    {
        cout << "=====" << endl;
        if (this == &another)
        {
            return *this;
        }
        if (this->str != NULL)
        {
            delete[] this->str;
            this->str = NULL;
            this->len = 0;
        }
        this->len = another.len;
        this->str = new char[len + 1];
        strcpy(this->str, another.str);
        return *this;
    }

    //重载+
    MyString &operator+(MyString &another)
    {
        static MyString temp;
        temp.len = this->len + another.len;
        temp.str = new char[temp.len + 1];
        strcpy(temp.str, this->str);
        strcat(temp.str, another.str);
        return temp;
    }

    //重载<<
    friend ostream &operator<<(ostream &os, MyString &s);

    //重载>>
    friend istream &operator>>(istream &is, MyString &s);

  private:
    int len;
    char *str;
};

/**
 * 重载 <<
 **/
ostream &
operator<<(ostream &os, MyString &s)
{
    os << s.str;
    return os;
}

/**
 * 重载 >>
 **/
istream &operator>>(istream &is, MyString &s)
{
    //将s的空间释放掉
    if (s.str != NULL)
    {
        delete s.str;
        s.str = NULL;
        s.len = 0;
    }
    char temp_str[4096] = {0};
    cout << "input data:" << endl;
    is >> temp_str;
    s.len = strlen(temp_str);
    s.str = new char[s.len + 1];
    strcpy(s.str, temp_str);
    return is;
}

int main()
{
    MyString s1 = "123";
    MyString s2 = "999";
    // MyString s3 = "abc";
    // s3 = s2;
    // cout << "s1 = " << s1 << endl;
    // cout << "s2 = " << s2 << endl;
    // cout << "s2[0] = " << s2[0] << endl;
    // cout << "s3 = " << s3 << endl;
    // cin >> s3;
    // cout << "s3 = " << s3 << endl;
    cout << "---------" << endl;
    cout << s1 << endl;
    cout << s1 + s2 << endl;
    system("pause");
    return 0;
}

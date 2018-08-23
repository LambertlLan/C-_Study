#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;
class Student
{
  private:
    int _id;
    char *_name;

  public:
    Student(int id, char *name)
    {
        this->_id = id;
        int len = strlen(name);
        this->_name = new char[len + 1];
        strcpy(this->_name, name);
    }
    void printName()
    {
        cout << "id = " << this->_id << ",name = " << this->_name << endl;
    }
    Student(const Student &another)
    {
        this->_id = another._id;
        this->_name = new char[strlen(another._name) + 1];
        strcpy(this->_name, another._name);
    }
    ~Student()
    {
        if (this->_name != NULL)
        {
            delete[] this->_name;
            this->_name = NULL;
            this->_id = 0;
        }
    }
    Student &operator=(Student &another)
    {
        if (this->_name != NULL)
        {
            delete[] this->_name;
            this->_name = NULL;
            this->_id = 0;
        }
        this->_id = another._id;
        this->_name = new char[strlen(another._name) + 1];
        strcpy(this->_name, another._name);
        return *this;
    }
};

int main()
{
    Student s1(1, "Tom");
    Student s2 = s1;
    //s2等于s3是浅拷贝,s3析构已执行,所以乱码
    Student s3(2, "Mike");
    s2 = s3;
    s1.printName();
    s2.printName();
    system("pause");
    return 0;
}

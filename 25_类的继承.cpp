#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Teacher
{
  private:
    int id;
    string name;

  public:
    Teacher(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    printA()
    {
        cout << "id = " << this->id << " name = " << this->name << endl;
    }
};
class Student : public Teacher
{
  private:
    int score;

  public:
    Student(int id, string name, int score) : Teacher(id, name)
    {
        this->score = score;
    }
    printStudent()
    {
        Teacher::printA();
        cout << "score = " << this->score << endl;
    }
};

int main()
{
    Teacher t1(1, "li4");
    t1.printA();
    Student s1(2, "wang5", 200);
    s1.printStudent();

    system("pause");
    return 0;
}

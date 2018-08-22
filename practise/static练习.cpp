#include <iostream>
#include <windows.h>

using namespace std;
class Student
{
  private:
    int _id;
    int _score;
    static int cout_student;
    static int cout_score;

  public:
    Student(int id, int score)
    {
        _id = id;
        _score = score;
        cout_student++;
        cout_score += score;
        Student::printStudent();
    }
    static printStudent()
    {
        cout << "Sudent(),cout_student = " << cout_student << ",cout_score = " << cout_score << endl;
    }
    ~Student()
    {
        cout_student--;
        cout_score -= _score;
        Student::printStudent();
    }
};
int Student::cout_student = 0;
int Student::cout_score = 0;
int main()
{
    Student *s1 = new Student(1, 100);
    Student *s2 = new Student(1, 80);
    Student *s3 = new Student(1, 90);
    delete s1;
    system("pause");
    return 0;
}

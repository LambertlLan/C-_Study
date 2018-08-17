#include <iostream>
using namespace std;

struct MyStruct
{
    int id;
    char name[10];
};
//指针形式
void printS1P(struct MyStruct *p)
{
    cout << p->id << " " << p->name << endl;
}
//引用形式
void printS1(struct MyStruct &s1)
{
    cout << s1.id << " " << s1.name << endl;
}
int main(int argc, char const *argv[])
{
    struct MyStruct s1 = {1, "name"};
    printS1P(&s1);
    printS1(s1);
    system("pause");
    return 0;
}

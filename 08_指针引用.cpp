#include <iostream>
#include <string.h>

using namespace std;

typedef struct teacher
{
    int id;
    char name[64];
} Teacher;

int get_mem(Teacher **p)
{
    Teacher *tp = (Teacher *)malloc(sizeof(Teacher));
    if (tp == NULL)
    {
        return -1;
    }
    tp->id = 1;
    strcpy(tp->name, "xiaoli");
    *p = tp;
    return 0;
}

int free_teacher(Teacher **p)
{
    if (p == NULL)
    {
        return 0;
    }
    free(*p);
    p = NULL;
    return 0;
}
int get_mem2(Teacher *&p)
{
    p = (Teacher *)malloc(sizeof(Teacher));
    p->id = 2;
    strcpy(p->name, "Lambert");
}
int main(int argc, char const *argv[])
{
    Teacher *tp = NULL;
    get_mem(&tp);
    cout << "id=" << tp->id << ",name=" << tp->name << endl;
    free_teacher(&tp);
    get_mem2(tp);
    cout << "id=" << tp->id << ",name=" << tp->name << endl;

    system("pause");
    return 0;
}

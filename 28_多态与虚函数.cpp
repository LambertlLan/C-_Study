#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class YueBuQun
{
  public:
    string Kongfu;
    YueBuQun(string Kongfu)
    {
        this->Kongfu = Kongfu;
    }
    virtual void fight()
    {
        cout << "YueBuQun"
             << " use " << Kongfu << endl;
    }
};
class LinPinZhi : public YueBuQun
{
  public:
    LinPinZhi(string Kongfu) : YueBuQun(Kongfu)
    {
    }
    void fight()
    {
        cout << "LinPinZhi"
             << " use " << Kongfu << endl;
    }
};
class BugHero : public YueBuQun
{
  public:
    BugHero(string Kongfu) : YueBuQun(Kongfu)
    {
    }
    void fight()
    {
        cout << "BugHero"
             << " use " << Kongfu << endl;
    }
};
void fightPeople(YueBuQun *people)
{
    //如果父类的fight不是虚函数的话,当函数发生多态时,编译器默认调用父类的fight()
    //将父类的函数设为虚函数,则会调用各自的fight()
    people->fight();
}
int main()
{
    YueBuQun *xiaoyy = new YueBuQun("KuiHua");
    LinPinZhi *xiaoll = new LinPinZhi("PiXie");
    BugHero *bugHero = new BugHero("BugHero");
    fightPeople(xiaoyy);
    fightPeople(xiaoll);
    fightPeople(bugHero);
    system("pause");
    return 0;
}

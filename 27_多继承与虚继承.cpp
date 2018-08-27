#include <iostream>
using namespace std;
class Furniture
{
  public:
    int m;
};
//父类使用虚继承,子类再继承爷爷类时,发生多继承情况时,只要一个m
class Bed : virtual public Furniture
{
  public:
    void sleep()
    {
        cout << "在床上睡觉" << endl;
    }
};
class Sofa : virtual public Furniture
{
  public:
    void sit()
    {
        cout << "在沙发上休息" << endl;
    }
};
class SofaBed : public Bed, public Sofa
{
  public:
    void SleepAndSit()
    {
        sleep();
        sit();
    }
};

int main(int argc, char const *argv[])
{
    Bed b;
    b.sleep();
    Sofa s;
    s.sit();
    cout << "------------" << endl;
    SofaBed sb;
    sb.SleepAndSit();
    sb.m = 100; //此时只有一个m
    //sb.Bed::m = 100;
    //sb.Sofa::m = 200;
    cout << "sleep.m=" << sb.m << endl;
    system("pause");
    return 0;
}

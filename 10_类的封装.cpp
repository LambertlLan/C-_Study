#include <iostream>
using namespace std;
class Date
{
  private:
    int year;
    int month;
    int day;

  public:
    void init_data()
    {
        cout << "year,month,day" << endl;
        cin >> year;
        cin >> month;
        cin >> day;
    }
    void printDate()
    {
        cout << year << "Y" << month << "M" << day << "D" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Date date;
    date.init_data();
    date.printDate();
    system("pause");
    return 0;
}

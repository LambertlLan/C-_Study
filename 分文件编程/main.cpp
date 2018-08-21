#include <iostream>
#include "Circle.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle c;
    c.setR(5);
    cout << "r = " << c.getR() << " area = " << c.getArea() << " grith = " << c.getGirth() << endl;
    system("pause");
    return 0;
}

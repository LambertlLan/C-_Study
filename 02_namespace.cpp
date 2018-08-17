#include <iostream>

//方式一
#if 0
using std::cout;
using std::endl;
using std::cin;
#endif

//方式三
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "helloWorld" << endl;
    cin >> a;
    cout << "a=" << a << endl;
    system("pause");
    return 0;
}
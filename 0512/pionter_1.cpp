#include <iostream>
using namespace std;
int main( )
{
    int a = 10;
    int* p = &a;
    cout << "a的实物是= " << a <<endl;
    cout << "a的物理门牌号是= " << &a <<endl;
    cout << "p柜子里的纸条是= " << p << endl;
    *p = 99;
    cout << "a的实物是：" << a << endl;
    return 0;
}

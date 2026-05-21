#include <iostream>
using namespace std;
void swap_numberous(int*p1,int*p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout <<"交换前a的实物是= " << a <<endl;
    cout <<"交换前b的实物是= " << b <<endl;
    swap_numberous(&a,&b);
    cout <<"交换后a的实物是= " << a <<endl;
    cout <<"交换后b的实物是= " << b <<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
int num = 0;  //控制变量
bool is_run = true;
while (is_run)
      { cout<<"hello"<<endl;
       num++;
if (num>=5)
        {  //错误2
        is_run = false;
        }
      }
        return 0;
}
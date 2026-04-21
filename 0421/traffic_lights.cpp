#include <iostream>
using namespace std;
int main( )
{
    enum Color
        {
            RED,
            YELLOW,
            GREEN
        };
        int num;
        cin >> num;
        switch (num)
        {
            case RED:
            cout <<"STOP!" <<endl;
            break;
            case YELLOW:
            cout <<"caution"<<endl;
            break;
            case GREEN:
            cout <<"GO"<<endl;
            break;
            default:
            cout <<"您输入错误" <<endl;
        }
        return 0;
        
}
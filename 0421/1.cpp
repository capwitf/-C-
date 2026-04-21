//枚举

#include <iostream>
using namespace std;
int main ( )
{enum Color
       {RED,
        YELLOW,
        BLUE
       };
    //这里错啦，加了一个 }，是之提前结束了
 int num;  //一开始写成了：
 cout << "小朋友喜欢什么颜色" <<endl;
 cin >> num;
 switch (num)
 {case RED :
    cout <<"小朋友喜欢红色"<<endl;
    break;
    case YELLOW:
    cout <<"小朋友喜欢黄色"<<endl;
    break;
    case BLUE:
    cout <<"小朋友喜欢蓝色"<< endl;
    break;
    default :
    cout <<"不好意思，您输入的数字有误，不知道"<<endl;
}
return 0;
}
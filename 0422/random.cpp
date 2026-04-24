#include <random>
#include <iostream>
using namespace std;
int get_random_num(int min,int max) 
{
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(min,max);
int random_number = dis(gen);
return random_number;
}
int main()
{
/**
 * 1.无限次机会
 * 2.提示大了还是小了
 * 3.提示总共猜了多少次
 */
 // 1.得到一个随机数1~100范围的数
 int num = get_random_num( 1,100 );
 // 2.提示用户输入数字进行猜测
 int guess_num;
 cout <<"请输入您猜的数字" <<endl;
 cin>> guess_num;
 int guess_count = 1;
 //如果猜错的话继续（循环）
 while (guess_num != num)   //ture即是猜错
 {
 // 1.判断条件
 // 2.循环控制因子就是guess_num变量
 // 3.控制因子的更新，即是如果用户更新，继续要求用户输入
     guess_count++;
     if (guess_num >num)
     {cout <<"您输入的的数字有点大"<<endl;
     cin >>guess_num;
     }
     else
     {cout <<"你输入的数字偏小"<<endl;
     cin >>guess_num;
     }
     //猜对的话，循环结束  
 }
 cout<<"对了，您总共猜了 "<<guess_count<<" 次"<<endl;
 return 0;
}
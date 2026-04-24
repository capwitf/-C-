#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12,45,9,78,23};
    double avg;
    int sum =0;
    for (int i =0;i<5;i++)
    sum = sum +arr[i];
    avg = sum/5.0;
    cout << "平均数是" << avg << endl;
    return 0;
}
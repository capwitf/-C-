#include <iostream>
using namespace std;
int main ()
{
    int arr[5] = {12,45,9,78,23};
    int max_val = arr[0];
    for ( int i =1;i<5;i++)
    {
        if(arr[i]>max_val)
        {
            max_val = arr[i];
        }
    }
    cout << "最大的数是" << max_val << endl;
    return 0;
}
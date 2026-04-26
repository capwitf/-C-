#include <iostream>
using namespace std;
int main ()
{   
    int arr[5];
    for (int i =0;i<5;i++)
    {
        cin >> arr[i];
    }
    int arr_max = arr[0];
    for (int i =1;i<5;i++)
    {
        if(arr[i]>arr_max)
        {
            arr_max = arr[i];
        }
    }
    cout << "最大值是: " << arr_max << endl;
    return 0;
}
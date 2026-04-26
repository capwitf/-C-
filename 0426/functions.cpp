#include <iostream>
using namespace std;

// 制造机器：不需要具体数据，只需要逻辑
int getMax(int arr[], int size) {
    int max_val = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    return max_val; 
}

// 使用机器：在这里输入具体数据
int main() {
    int my_arr[5] = {12, 45, 9, 78, 23};
    
    // 调用机器并拿到结果
    int result = getMax(my_arr, 5); 
    
    cout << "机器告诉我的最大值是: " << result << endl;
    return 0;
}
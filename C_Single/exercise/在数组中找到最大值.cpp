#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int arr_1[10] = {};

    srand((unsigned)time( NULL )); //随机数种子

    for (int i =0; i < 10; i++)
    {
        arr_1[i] = rand(); //产生随机数，赋值给数组
        cout << "数组中 arr_1[" << i << "]" << " 的值是 " << arr_1[i] << endl;
    }

    int max = 0; // 假设最初最大值为0
    for (int i = 0; i < 10; i++)
    {
        if (arr_1[i] > max) // 如果大于最大值，则将最大值更新，最后输出
        {
            max = arr_1[i];
        }
    }
    cout << "数组中最大的值是 " << max << endl;
}
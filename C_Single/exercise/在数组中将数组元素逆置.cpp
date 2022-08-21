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
        cout << "arr_1[" << i << "]" << " " << arr_1[i] << endl;
    }

    int start = 0; //起始数组下标
    int end = sizeof(arr_1) / sizeof(arr_1[0]) - 1; //算出最后数组下标
    int tmp_arr = 0; //中间临时变量用来存放第一个数组

    for (int start = 0; start < end; start++)
    {
        tmp_arr = arr_1[start];
        arr_1[start] = arr_1[end];
        end -= 1;
    }

    for (int i = 0; i< 10; i++)
    {
        cout << "arr_1[" << i << "]" << " " << arr_1[i] << endl;
    }

}
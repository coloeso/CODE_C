#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // 1. 比较相邻的两个数，如果第一个大于第二个，就交换位置
    // 2. 对每一对相邻的元素做相同的工作，执行完毕后，找到第一个最大值
    // 3. 重复以上的步骤，每次比较次数-1，直到不需要比较


    int arr_1[10] = {};
    srand(time(NULL)); // 随机种子

    for (int i =0; i < 10; i++)
    {
        arr_1[i] = rand(); //产生随机数，赋值给数组
        cout << "arr_1[" << i << "]" << " " << arr_1[i] << endl;
    }   

    // 使用冒泡排序实现升序序列
    int total_elements = sizeof(arr_1)/sizeof(arr_1[0]);
    for (int i = 0; i < (total_elements -1); i++)
    {
        for (int j = 0; j < (total_elements -1 -i); j++)
        {
            if (arr_1[j] > arr_1[j+1])
            {
                int tmp_arr = arr_1[j];
                arr_1[j] = arr_1[j+1];
                arr_1[j+1] = tmp_arr;
            }
        }
    }
    cout << "排序后的数组为：" << endl;
    for (int i =0; i < 10; i++)
    {
        cout << "arr_1[" << i << "]" << " " << arr_1[i] << endl;
    }
    system("pause");
}
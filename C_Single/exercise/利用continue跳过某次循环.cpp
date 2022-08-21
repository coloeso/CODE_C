#include <iostream>

// continue 可以 筛选一些数字
using namespace std;

int main() {
    // 输出 100 以内的奇数
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0) //如果是奇数输出，是偶数不输出，除2取模是0，表示被2整除的数，则为偶数
        {
            continue; //跳过本次循环，继续执行下次循环，而 break 是直接跳出循环
        }
        cout << i << " ";
    }

}
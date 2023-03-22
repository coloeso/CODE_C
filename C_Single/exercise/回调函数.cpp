#include <iostream>

using namespace std;

/*函数指针-指向函数的指针*/
/*回调函数-通过函数指针调用的函数*/

// 声明一个指针函数,返回值是 int 类型，传递两个 int 类型参数。
// int (*P_FUNC)(int)(int);
// 一般使用 typedef 定义 指针函数的别名，方便后边使用
typedef int(*P_FUNC)(int,int);
// c++ 11 推荐使用 using PFANC = int(*)(int)(int);

/*定义一个回调函数*/
int func_1(int num_1, int num_2)
{
    num_1 = num_1 + num_2;
    cout << "num_1 is:" << num_1 << endl;
    return 0;
}

/*定义一个调用函数*/
int func_2(P_FUNC p_func, int num_1, int num_2)
{
    return p_func(num_1, num_2);
}

int main()
{
    int tmp_num_1 = 1;
    int tmp_num_2 = 3;

    P_FUNC tmp_p_func_1 = func_1;
    func_2(tmp_p_func_1, tmp_num_1, tmp_num_2);

    cin.get();

    return 0;
}
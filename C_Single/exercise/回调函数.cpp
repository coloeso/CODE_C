#include <iostream>

using namespace std;

/*+++++++++++++++++++++++++++++++++++++*/
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
    cout << "in func_1 num_1 is:" << num_1 << endl;
    return 0;
}

int func_3(int num_1, int num_2)
{
    num_1 = num_1 xor num_2;
    cout << "in func_3 num_1 is:" << num_1 << endl;
    return 0;
}

/*定义一个调用函数*/
int func_2(P_FUNC p_func, int num_1, int num_2)
{
    return p_func(num_1, num_2);
}

/*+++++++++++++++++++++++++++++++++++++*/
/* 还可以使用结构的方式定义 指针函数，然后使用结构体调用对应的函数，后边有时间补充*/

void api_1_func_1(int num_1, int num_2);
void api_1_func_2(int num_1, int num_2);
void api_1_func_3(int num_1, int num_2);

void api_2_func_1(int num_1, int num_2);
void api_2_func_2(int num_1, int num_2);
void api_2_func_3(int num_1, int num_2);

void api_1_func_1(int num_1, int num_2)
{
    // TODO
}
void api_1_func_2(int num_1, int num_2)
{
    // TODO
}
void api_1_func_3(int num_1, int num_2)
{
    // TODO
}

void api_2_func_1(int num_1, int num_2)
{
    // TODO
}
void api_2_func_2(int num_1, int num_2)
{
    // TODO
}
void api_2_func_3(int num_1, int num_2)
{
    // TODO
}

struct some_api_s
{
    void (*api_func_1)(int, int); /* fucn_1 */
    void (*api_func_2)(int, int); /* fucn_2 */
    void (*api_func_3)(int, int); /* fucn_3 */
};
typedef struct some_api_s some_api_t;

some_api_t *api = NULL;
some_api_t api_1 = 
{
    api_1_func_1,
    api_1_func_2,
    api_1_func_3
};

some_api_t api_2 = 
{
    api_2_func_1,
    api_2_func_2,
    api_2_func_3
};


int main()
{
    /*+++++++++++++++++++++++++++++++++++++*/
    int tmp_num_1 = 1;
    int tmp_num_2 = 3;
    int select_func;
    P_FUNC tmp_p_func_1;

    cout << "请选择使用那个函数：输入 1 或 3" << endl;
    cin >> select_func;

    if (select_func != 1 && select_func != 3)
    {
        cout << "输入错误，退出！！！" << endl;
        return -1;
    }

    if (select_func == 1)
    {
        tmp_p_func_1 = func_1;
    } else {
        tmp_p_func_1 = func_3;
    }

    func_2(tmp_p_func_1, tmp_num_1, tmp_num_2);


    /*+++++++++++++++++++++++++++++++++++++*/
    int api_select;

    cout << "请选择使用那个函数：输入 1 或 2" << endl;
    cin >> api_select;

    if (select_func != 1 && select_func != 2)
    {
        cout << "输入错误，退出！！！" << endl;
        return -1;
    }

    if (api_select ==1)
    {
        api = &api_1;
    } else {
        api = &api_2;
    }

    cin.get();

    return 0;
}

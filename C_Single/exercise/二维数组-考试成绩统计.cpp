#include <iostream>
using namespace std;

/*
        语文    数学    英语    总分
张三    100     101     102     
李四    105     112     114 
王五    102     98      120
*/
int main()
{
    int arr_2[3][3];
    int row_total_elements = sizeof(arr_2) / sizeof(arr_2[0]); // 行数 = 总元素占用空间 / 每一行元素占用空间
    int column_total_elements = sizeof(arr_2[0]) / sizeof(arr_2[0][0]); // 列数 = 每一行元素占用空间 / 一个元素占用空间

    for (int i =0; i < (row_total_elements -1); i++)
    {
        for (int j = 0; j < (column_total_elements - 1); j++)
        {
            cout << "请输入："
            cin >> arr_2[i][j];

        }
    }


    system("pause");
}
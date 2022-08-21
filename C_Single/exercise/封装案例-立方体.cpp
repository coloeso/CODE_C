#include <iostream>
using namespace std;

// 设计立方体类
// 设计属性,长宽高
// 设计行为，获取立方体面积和体积
// 分别用全局函数和成员函数 判断两个立方体是否相等

struct cube_attr_s
{
    int m_Length;   // 长
    int m_Weight;   // 宽
    int m_High;     // 高
};
typedef cube_attr_s cube_attr_t;

class Cube
{
private:

    cube_attr_t m_attr;   // 体积的属性,参见 struct cube_attr
    int cube;

public:

    void set_cube_attr(cube_attr_t attr)
    {
        m_attr = attr;
    }

    cube_attr_t get_cube_attr()
    {
        return m_attr;
    }

    int set_cube()
    {
        cube = m_attr.m_Length * m_attr.m_Weight * m_attr.m_High;
    }

    int get_cube()
    {
        return cube;
    }

};


int main()
{
    cube_attr_t cube_1_attr;

    cube_1_attr.m_High = 10;
    cube_1_attr.m_Length = 11;
    cube_1_attr.m_Weight = 12;

    Cube cube_1;

    cube_1.set_cube_attr(cube_1_attr);
    cube_1.set_cube();


    // cout << "立方体 cube_1 的 长是 %d,宽是 %d, 高是 %d" << "cube_1.get_cube_attr()"  << endl;
    cout << "立方体 cube_1 的面积是" << cube_1.get_cube()  << endl;

    system("pause");
}
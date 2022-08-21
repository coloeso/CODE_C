#include <iostream>
using namespace std;

// 设计立方体类
// 设计属性,长宽高
// 设计行为，获取立方体体积
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

    void set_cube()
    {
        cube = m_attr.m_Length * m_attr.m_Weight * m_attr.m_High;
    }

    int get_cube()
    {
        return cube;
    }

    // 成员函数判断两个立方体体积是否相等
    // 由于成员调用的函数，所以只需要自身和传递进来的另一个立方体的属性作比较，只需要传递一个参数即可
    bool isSameByClass(Cube &c)
    {
        if (m_attr.m_Length == c.m_attr.m_Length && m_attr.m_High == c.m_attr.m_High && m_attr.m_Weight == c.m_attr.m_Weight)
        {
            return true;
        }
        return false;
    }

};

// 全局函数判断两个立方体体积是否相等
bool isSame(Cube &c1, Cube &c2)
{
    cube_attr_t c1_attr;
    cube_attr_t c2_attr;

    c1_attr = c1.get_cube_attr();
    c2_attr = c2.get_cube_attr();

    if (c1_attr.m_Length == c2_attr.m_Length && c1_attr.m_High == c2_attr.m_High && c1_attr.m_Weight == c2_attr.m_Weight)
    {
        return true;
    };
    return false;
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


    cube_attr_t cube_2_attr;

    cube_2_attr.m_High = 10;
    cube_2_attr.m_Length = 11;
    cube_2_attr.m_Weight = 12;

    Cube cube_2;

    cube_2.set_cube_attr(cube_2_attr);
    cube_2.set_cube();

    // cout << "立方体 cube_1 的 长是 %d,宽是 %d, 高是 %d" << "cube_1.get_cube_attr()"  << endl;
    cout << "立方体 cube_1 的体积是" << cube_1.get_cube()  << endl;
    cout << "立方体 cube_2 的体积是" << cube_2.get_cube()  << endl;

    // 利用全局函数判断两个立方体体积是否相等
    bool ret = isSame(cube_1, cube_2);
    if (ret)
    {
        cout << "立方体 cube_1 和立方体 cube_2 是相等的。" << endl;
    } else
    {
        cout << "立方体 cube_1 和立方体 cube_2 不相等。" << endl;
    };
    // 利用成员函数判断两个立方体体积是否相等
    bool ret2 = cube_1.isSameByClass(cube_2);
    if(ret2)
    {
        cout << "立方体 cube_1 和立方体 cube_2 是相等的。" << endl;
    } else
    {
        cout << "立方体 cube_1 和立方体 cube_2 不相等。" << endl;
    };

    system("pause");
}
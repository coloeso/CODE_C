#include <iostream>
using namespace std;


// 1.使用一个已经创建完成的对象来初始化一个对象
// 2.值传递方式给函数参数传值
// 3.值方式返回局部对象


class Person
{
public:

    int m_Age;

    // 编译器会默认提供无参构造函数
    Person()
    {
        cout << "这里调用了 无参构造函数" << endl;
    }

    Person(int age)
    {
        m_Age = age;
        cout << "这里调用了 有参构造函数" << endl;
    }

    Person(const Person &p)
    {
        // 将传入的所有属性，拷贝到自己身上
        m_Age = p.m_Age;
        cout << "这里调用了 拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "这里调用了 析构函数" << endl;
    }
};

// 1.使用一个已经创建完成的对象来初始化一个对象
void test_1()
{
    Person p1(20);
    Person p2(p1);

    cout << "p1 的年龄是" << p1.m_Age << endl;
    cout << "p2 的年龄是" << p2.m_Age << endl;

};

// 2.值传递方式给函数参数传值

void doWork(Person p)
{

};

void test_2()
{
    Person p;
    doWork(p);
}

// 3.值方式返回局部对象

Person doWork2()
{
    Person p3;
    return p3;
};

void test_3()
{
    Person p4 = doWork2();
};

int main()
{
    cout << "1..." << endl;
    test_1();
    cout << "2..." << endl;    
    test_2();
    cout << "3..." << endl;    
    test_3();

    system("pause");

    return 0;
}
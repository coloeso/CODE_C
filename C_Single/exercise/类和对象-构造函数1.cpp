#include <iostream>
using namespace std;


class Person
{
public:
    // 编译器会默认提供无参构造函数
    Person()
    {
        cout << "这里调用了 无参构造函数" << endl;
    }

    Person(int a)
    {
        cout << "这里调用了 有参构造函数" << endl;
    }

    Person(const Person &p)
    {
        // 将传入的所有属性，拷贝到自己身上
        age = p.age;
        cout << "这里调用了 拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "这里调用了 析构函数" << endl;
    }
};

// 构造函数都是必须实现的，如果我们自己不提供，系统也会自动调用
void test_1()
{
    // 括号法
    Person p1;  //调用无参构造函数
    Person p2(10);  //调用有参构造函数
    Person p3(p2);  //调用拷贝构造函数

    // 调用无参构造函数时，不要加()
    // 因为下面这行代码，编译器认为是一个函数的声明，不会认为是在创建对象
    // Person p1();

    // 显示法
    Person p1;
    Person p2 = Person(10); //有参构造，Person(10) 是匿名对象，当前行结束后，系统会立即回收匿名函数
    Person p3 = Person(p3); //拷贝构造

    // 不要利用拷贝构造函数 初始化匿名对象，编译器会认为 Person(p3) == Person p3
    // Person(p3);


    // 隐式转换法
    Person p4 = 10; //有参构造，相当于 Person p4 = Person(10);
    Person p5 = p4; //拷贝构造
};

int main()
{

    test_1();

    system("pause");

    return 0;
}
#include <iostream>

using namespace std;


int pointer_array();
int array_pointer();

int main()
{
    char temp;
    bool is_pointer_array = false;

    cout << "指针数组？请输入 Y or N" << endl;
    cin >> temp;

    if(temp != 'Y' && temp != 'N')
    {
        cout << "请输入正确的参数...";
        return -1;
    }

    if(temp == 'Y')
    {
        is_pointer_array = true;
    }

    if(is_pointer_array)
    {
        pointer_array();
    } else 
    {
        array_pointer();
    }

    cout << "end...";

    return 0;
}

/*指针数组*/
int pointer_array()
{
    int *ptr[3];    /* [] 优先级高于 *，指针数组，int* 修饰 指针数组中的元素，
                        表示 ptr 数组里的元素是指针类型*/
    int array_1[2] = {11, 22};
    int array_2[3] = {33, 44, 55};
    int array_3[3] = {66, 77, 88};

    ptr[0] = array_1;
    ptr[1] = array_2;
    ptr[2] = array_3;

    for(int i=0; i<3; ++i)
    {
        cout << ptr[i] << endl;
        cout << *(ptr[i]) << endl;
    }
    
    const char *str[3] = {"apple", "origin", "banana"};

    for(int i=0; i<3; ++i)
    {
        cout << str[i] << endl; /*这里打印的为什么不是地址，而是字符串？？*/
        cout << *(str[i]) << endl;
    }

    return 0;
}


/*数组指针*/
int array_pointer()
{
    int (*ptr)[4];  /* () 优先级高于 []，ptr 表示一个指向int[4] 的数组的指针，int 修饰数组*/

    int array_1[4] = {11, 22, 33, 44};
    
    ptr = &array_1;

    cout << "ptr 的值为 " << ptr << endl;

    for(int i=0; i<4; ++i)
    {
        cout << "ptr[" << i << "] 的值为 " << ptr[i] << "";
        cout << "表示数组第" << i << "个元素的地址" << endl;
        cout << "*ptr[" << i << "] 的值为 " << *(ptr[i]) << endl;
        cout << "表示数组第" << i << "个元素的值" << endl;
    }

    return 0;

}
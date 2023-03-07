#include <iostream>

using namespace std;


int pointer_array();
int array_pointer();

int main()
{
    
    pointer_array();
    cout << "end..."

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
    
    char *str = {"apple", "origin", "banana"};

    for(int i=0; i<3; ++i)
    {
        cout << str[i] << endl;
        cout << *(str[i]) << endl;
    }

    return 0;
}


/*数组指针*/
int array_pointer()
{

}
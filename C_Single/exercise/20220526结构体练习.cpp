#include <iostream>
#include <string>

using namespace std;


int main()
{

struct Student
{
    string name; 
    int age;
    int score;
};

struct Student coloeso;

coloeso.name = "coloso";
coloeso.age = 18;
coloeso.score = 100;

struct Student ph = {"屁花", 3, 59};

cout << "名字是 " << coloeso.name << ",年龄是" << coloeso.age << ",分数是" << coloeso.score << endl;
cout << "名字是 " << ph.name << ",年龄是" << ph.age << ",分数是" << ph.score << endl;


    system("pause");
}
#include "symbol_example.h"

Example::Example()
{
    // 构造函数
    variable = 10;
    a = false;
    cout << "初始化类" << endl;
}


void Example::fun_1()
{
    // 一个公有成员函数
    variable = 30;
    cout << "调用方法1" << endl;

}

void Example::fun_2()
{
    // 一个公有成员函数
    // ::的作用
    cout << "调用方法2" << endl;
    cout << a << endl;
    cout << sizeof(int) << endl;
}

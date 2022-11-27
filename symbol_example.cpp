#include "symbol_example.h"
/*
用于验证解释下列四个符号在C++中类的作用与意义
符号1：.
符号2：->
符号3：:
符号4：::
*/

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

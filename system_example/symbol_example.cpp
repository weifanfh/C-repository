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

void show_symbol()
{
    // 展示符号的功能使用
    cout << "第一个方法" << endl;
    cout << "===================" << endl;
    Example run_base;
    Example *run_base_con = &run_base;

    /*.与->的区别*/
    // .的作用
    run_base.fun_1();
    cout << run_base.variable << endl;
    // ->的作用
    run_base_con -> fun_1();
    cout << run_base_con -> variable << endl;
    // ::的作用
    run_base.fun_2();
    run_base_con -> fun_2();

    Example_2 run_2;
    cout << run_2.variable_2 << endl;
    cout << run_2.variable << endl;
}


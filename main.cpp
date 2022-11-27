#include "symbol_example.h"

int main()

{
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

    return 0;
}
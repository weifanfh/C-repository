#include "symbol_example.h"
#include "system_exchange_example.h"

void test_symbol()
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

    Example_2 run_2;
    cout << run_2.variable_2 << endl;
    cout << run_2.variable << endl;
}

void test_system()
{
    SystemBase run_base;
    run_base.binary_to_decimal();
}

int main()

{
    test_system();
    return 0;

}
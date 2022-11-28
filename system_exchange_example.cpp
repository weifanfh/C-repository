#include "system_exchange_example.h"

void SystemBase::binary_to_decimal()
{
    // 二进制数转换为十进制
    string value_two;
    int result = 0;
    cout << "请输入一个二进制数" << endl;
    cin >> value_two;
    for (int i = value_two.length(); i >= 1; i--)
    {
        int ten_add = 1;
        for (int j = i-1; j > 0; j--)
        {
            ten_add = ten_add*2;
        }
        cout << "组成十进制数的一个数：" << ten_add*(value_two[value_two.length() - i]-48) << endl;
        result = result + ten_add*(value_two[value_two.length() - i]-48);
        
    }
    cout << "二进制数"<< value_two <<"对应的十进制值为："<< result<<endl;
}

void SystemBase::decimal_to_binary()
{
    // 十进制数转换为二进制

    int value_ten;
    string result;
    int high_value = 0;
    
    cout << "请输入一个十进制数" << endl;
    cin >> value_ten;
    for (int i = value_ten; i > 1; i = i/2,high_value = i)
    {   
        cout << "余数为：" << (i - (i/2)*2) << endl;
        result = std::to_string((i - (i/2)*2)) + result;
    }
    result = to_string(high_value) + result;
    cout << "十进制数"<< value_ten <<"对应的二进制值为："<< result<<endl;
}

void show_system()
{
    // 展示进制转换逻辑
    SystemBase run_base;
    run_base.binary_to_decimal();
}
#ifndef SYMBOL_EXAMPLE_H
#define SYMBOL_EXAMPLE_H
#include <iostream>
#include <string.h>

using namespace std;

class Example
{
    // 用于验证.、->、:、::四个符号的作用

    public:
        int variable;
        unsigned a : 8;
        Example();
        void fun_1();
        void fun_2();

};

#endif
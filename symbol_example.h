#ifndef SYMBOL_EXAMPLE_H
#define SYMBOL_EXAMPLE_H
#include <iostream>
#include <string.h>

using namespace std;

/*
用于验证解释下列四个符号在C++中类的作用与意义
符号1：.
符号2：->
符号3：:
符号4：::
*/

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

class Example_2: public Example
{
    public:
        int variable_2 = 100;
};

#endif
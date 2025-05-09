#include <stdio.h>

// 函数原型
int power(int m, int n);

// 函数原型的作用：
//     函数声明和定义分离
//     提前告知编译器函数的存在
// 函数调用出现在函数定义之前，且没有提供该函数的原型声明，编译器会在编译阶段无法识别该函数的参数类型和返回类型, 导致编译错误。
//
// 函数原型中的参数名是可选的，合适的参数名能够起到很好的说明性作用，因此我们在函数原型中总是指明参数名。
// int power(int, int);

/* test power function */
int main() {
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i)); //
    return 0;
}

// 函数声明
/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i<= n; ++i)
        p = p * base;
    return p;
}

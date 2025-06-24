#include <stdio.h>

// 静态全局变量
// 其他函数
static char buf[BUFSIZ]; /* buffer for ungetch */
static int bufp = 0; /* next free position in buf */

int getch(void) {
    // ...
    return 0;
}

void ungetch(int c) {
    // ...
}

// 局部静态变量
void counter() {
    static int count = 0; // 局部静态变量
    count++;
    printf("counter = %d\n", count);
}

// 静态全局变量
static int global_var = 10; // 静态全局变量，限制在当前文件内可见

void display() {
    printf("Global variable: %d\n", global_var);
}

// 静态函数
// 静态函数只能在当前文件中使用
static void static_function() {
    printf("Static function\n");
}

int main() {
    // 局部静态变量
    counter();
    counter();
    counter();
    // 全局静态变量
    display();
    // 静态函数
    static_function();
    return 0;
}
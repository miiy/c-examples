#include <stdio.h>

// 结构体
struct point {
    int x;
    int y;
};

// 嵌套结构体
struct rect {
    struct point p1;
    struct point p2;
};

int main() {
    struct point p1 = {1, 2};
    printf("%d %d\n", p1.x, p1.y);

    // 匿名结构体
    struct {
        int a;
    } s1 = {1};
    printf("%d\n", s1.a);

    // 嵌套结构体
    struct rect screen1;

    // 直接赋值
    screen1.p1.x = 1;
    screen1.p1.y = 2;
    screen1.p2.x = 3;
    screen1.p2.y = 4;
    printf("%d %d %d %d\n", screen1.p1.x, screen1.p1.y, screen1.p2.x, screen1.p2.y);

    // 按照结构体定义顺序赋值
    struct rect screen2 = {1, 2, 3, 4};
    printf("%d %d %d %d\n", screen2.p1.x, screen2.p1.y, screen2.p2.x, screen2.p2.y);

    struct rect screen3 = {{1, 2}, {3, 4}};
    printf("%d %d %d %d\n", screen3.p1.x, screen3.p1.y, screen3.p2.x, screen3.p2.y);

    // 使用临时结构体
    struct point p2 = {1, 2};
    struct point p3 = {3, 4};
    struct rect screen4 = {p2, p3};
    printf("%d %d %d %d\n", screen4.p1.x, screen4.p1.y, screen4.p2.x, screen4.p2.y);

    // 使用复合字面量
    struct rect screen5 = { .p1 = { .x = 1, .y = 2}, .p2 = { .x = 3, .y = 4}};
    printf("%d %d %d %d\n", screen5.p1.x, screen5.p1.y, screen5.p2.x, screen5.p2.y);
}
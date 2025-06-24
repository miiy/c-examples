#include <iostream>
#include <thread>

void printMessage(int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << "Hello from thread (function pointer)!\n";
    }
}

// 使用函数指针
// g++ -std=c++11 main.cpp
int main() {
    std::thread t1(printMessage, 5); // 创建线程，传递函数指针和参数
    t1.join(); // 等待线程完成

    // std::thread t1;
    // t1 = std::thread(printMessage, 5); // 创建线程，传递函数指针和参数
    // t1.join(); // 等待线程完成
    return 0;
}
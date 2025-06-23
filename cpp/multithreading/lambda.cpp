#include <iostream>
#include <thread>

// 使用 Lambda 表达式
int main() {
    std::thread t3([](int count) {
        for (int i = 0; i < count; ++i) {
            std::cout << "Hello from thread (lambda)!\n";
        }
    }, 5); // 创建线程，传递 lambda 表达式和参数
    t3.join(); // 等待线程完成
    return 0;
}
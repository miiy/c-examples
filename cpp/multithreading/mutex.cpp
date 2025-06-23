#include <mutex>
#include <thread>

std::mutex mtx; // 全局互斥量

void safeFunction() {
    mtx.lock(); // 请求锁定互斥量
    // 访问或修改共享资源
    mtx.unlock(); // 释放互斥量
}

int main() {
    std::thread t1(safeFunction);
    std::thread t2(safeFunction);
    t1.join();
    t2.join();
    return 0;
}
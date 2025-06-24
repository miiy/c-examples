#include <iostream>
#include <thread>

// 线程局部存储（Thread Local Storage, TLS）
thread_local int threadData = 0;

void threadFunction() {
    threadData = 42; // 每个线程都有自己的 threadData 副本
    std::cout << "Thread Data: " << threadData << std::endl;
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);
    t1.join();
    t2.join();
    return 0;
}
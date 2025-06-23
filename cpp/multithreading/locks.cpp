#include <mutex>
#include <thread>

std::mutex mtx;

void safeFunctionWithLockGuard() {
    std::lock_guard<std::mutex> lk(mtx);
    // 访问或修改共享资源
}
void safeFunctionWithUniqueLock() {
    std::unique_lock<std::mutex> ul(mtx);
    // 访问或修改共享资源
    // ul.unlock(); // 可选，手动释放锁
    // ...
}

int main() {
    return 0;
}
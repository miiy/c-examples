#include <iostream>

using namespace std;

struct Vector {
    int sz; // 元素的数量
    double* elem; // 指向元素的指针
};

void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // 分配一个数组，它包含 s 个 double 元素
    v.sz = s;
}

// 从 cin 读取 s 个整数，然后返回这些整数的和；其中，假定 s 是正的
double read_and_sum(int s) {
    Vector v;
    vector_init(v, s); // 为 v 分配 s 个元素
    for (int i = 0; i != s; ++i)
        cin >> v.elem[i]; // 读取元素

    double sum = 0;
    for (int i = 0; i != s; ++i)
        sum += v.elem[i]; // 计算元素的和

    return sum;
}

int main() {
    double sum;
    sum = read_and_sum(5);
    cout << "The sum is: " << sum << endl;
    return 0;
}
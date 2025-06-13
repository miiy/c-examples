#include <iostream>

using namespace std;

class Box {
    public:
        double length;      // 长度
        double breadth;     // 宽度
        double height;      // 高度

        // 在类内部定义成员函数
        double getVolume(void)
        {
            return length * breadth * height;
        }

        double getVolume2(void);
};

// 使用范围解析运算符::定义
double Box::getVolume2()
{
    return length * breadth * height;
}

int main() {
    Box myBox;
    myBox.getVolume();
    myBox.getVolume2();
    return 0;
}
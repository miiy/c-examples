#include <iostream>

using namespace std;

class Box
{
    protected:
        double width;
};

class SmallBox:Box
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
};

// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
    return width;
}

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

int main()
{
    SmallBox box;

    // 使用成员函数设置宽度
    box.setSmallWidth(5.0);
    cout << "Width of box : "<< box.getSmallWidth() << endl;

    return 0;
}
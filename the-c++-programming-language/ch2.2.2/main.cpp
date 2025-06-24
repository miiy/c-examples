#include <iostream>

using namespace std;

// g++ -std=c++11 main.cpp
int main() {
    double d1 = 2.3;
    double d2 {2.3};
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;

    int i1 = 7.2;
    // int i2 {7.2};
    // int i3 = {7.2};
    cout << "i1: " << i1 << endl;

    return 0;
}
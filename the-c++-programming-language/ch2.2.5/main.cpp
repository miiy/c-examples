#include <iostream>

using namespace std;

void copy_fct() {
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i = 0; i < 10; ++i) {
        v2[i] = v1[i];
    }
}

void print() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto i : v) {
        cout << i << "\n";
    }

    for (auto x: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}) {
        cout << x << "\n";
    }
}

void increment() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto& x : v) {
        ++x;
    }
    for (auto x : v) {
        cout << x << "\n";
    }
}

int main() {
    copy_fct();
    print();
    increment();
    return 0;
}
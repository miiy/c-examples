#include <stdio.h>

int power(int base, int n);

int main() {
    int i = 3;
    int j = power(2, i);
    printf("2 to the power of %d is %d\n", i, j);
    return 0;
}

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n) {
    int p;

    for (p = 1; n >0; --n)
        p = p *base;
    return p;
}
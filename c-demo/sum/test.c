#include "stdio.h"
#include "time.h"
#include "math.h"

long sum();

int main() {
    clock_t start, end;
    double duration;
    start = clock();

    long s1 = sum();

    end = clock();

    printf("%ld\n", s1);
    duration = (double) (end - start) / CLOCKS_PER_SEC;
    printf("%f\n", duration);
    return 0;
}

long sum() {
	long sum = 0;
	int i = 0;
	for(i = 0; i <= 100000000; i++) {
        sum += i;
	}
    return sum;
}

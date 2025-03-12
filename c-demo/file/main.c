#include <stdio.h>
#include <string.h>

void read1();
void read2();

int main() {
    read1();
    printf("\n");
    read2();
    return 0;
}

// 按行读取：最后一行读取两遍
void read1() {
    FILE *fp;
    char buf[100];

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("open file error");
    }

    while (!feof(fp)) {
        fgets(buf, sizeof(buf), fp);
        printf("%s", buf);
    }

    fclose(fp);
}

// 按行读取
void read2() {
    FILE *fp;
    char buf[100];

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("open file error");
    }

    fgets(buf, sizeof(buf), fp);
    while (!feof(fp)) {
        printf("%s", buf);
        fgets(buf, sizeof(buf), fp);
    }

    fclose(fp);
}

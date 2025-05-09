#include <stdio.h>

enum { INT, FLOAT, STRING };

union u_tag {
    int ival;
    float fval;
    char *sval;
};

int main() {
    union u_tag u;
    int utype = FLOAT;  // Track which type is currently stored
    u.fval = 1.0;

    if (utype == INT)
        printf("%d\n", u.ival);
    else if (utype == FLOAT)
        printf("%f\n", u.fval);
    else if (utype == STRING)
        printf("%s\n", u.sval);
    else
        printf("bad type %d in utype\n", utype);

    return 0;
}
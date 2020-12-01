#include <stdio.h>

#define LEN 23

int isTriangle(int side1, int side2, int side3);

int main(void)
{
    unsigned int a[LEN], b[LEN], c[LEN];
    unsigned int result[LEN];
    unsigned int i;
    for (i = 0; i < LEN; ++i) {
        scanf("%u %u %u", &a[i], &b[i], &c[i]);
        result[i] = isTriangle(a[i], b[i], c[i]);
    }
    puts("\n\nanswer:");
    for (i = 0; i < LEN; ++i) {
        printf("%u ", result[i]);
    }
    return 0;
}

int isTriangle(int side1, int side2, int side3) 
{
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        return 1;
    }
    else {
        return 0;
    }
}

#include <stdio.h>

#define LEN 10

int sum(int firstItem, int step, int n);

int main(void)
{
    unsigned int a[LEN], b[LEN], n[LEN];
    unsigned int total[LEN];
    unsigned int i;
    for (i = 0; i < LEN; ++i) {
        scanf("%u %u %u", &a[i], &b[i], &n[i]);
        total[i] = sum(a[i], b[i], n[i]);
    }
    for (i = 0; i < LEN; ++i) {
        printf("%u ", total[i]);
    }
    return 0;
}

int sum(int firstItem, int step, int n)
{
    return (((double)n/2.0) * (2*firstItem + (n - 1) * step));
}

#include <cstdio>

#define LEN 27

int main(void)
{
    long int a[LEN];
    long int b[LEN];
    long int c[LEN];
    long int min[LEN];
    int i;

    for (i = 0; i < LEN; ++i) {
        scanf("%ld%ld%ld", &a[i], &b[i], &c[i]);
        min[i] = a[i];
        if (b[i] < min[i]) min[i] = b[i];
        if (c[i] < min[i]) min[i] = c[i];
    }
    for (i = 0; i < LEN; ++i) 
        printf("%d ", min[i]);

    return 0;
}

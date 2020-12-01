#include <stdio.h>

#define LEN 31

int main(void)
{
    long long int a[LEN], b[LEN];
    unsigned int n, i;
    long long int c[LEN];

    for (i = 0; i < LEN; ++i) {
        scanf("%lld %lld", &a[i], &b[i]);
        c[i] = round(a[i] / (double) b[i]);
    }
    for (i = 0; i < LEN; ++i) 
        printf("%lld ", c[i]);
    
    return 0;
}

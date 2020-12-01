// Fahrenheit to Celsius
#include <stdio.h>
#include <math.h>

#define LEN 36

int main(void)
{
    long long int fahr;
    long long int cel[LEN];
    unsigned int i;

    for (i = 0; i < LEN; ++i) {
        scanf("%lld", &fahr);
        cel[i] = (long long) round((fahr - 32) * (double) (5.0/9.0));
    }
    for (i = 0; i < LEN; ++i) 
        printf("%lld ", cel[i]);
    return 0;
}

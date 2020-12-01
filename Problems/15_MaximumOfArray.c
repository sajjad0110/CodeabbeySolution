// Maximum of array from 300 elements
#include <stdio.h>

int main(void)
{
    long long int num[300];
    long long int max, min;
    unsigned int i;

    for (i = 0; i < 300; ++i) {
        scanf("%lld", &num[i]);
    }
    min = num[0];
    max = num[0];
    for (i = 1; i < 300; ++i) {
        if (max < num[i]) {
            max = num[i];
        }
        if (min > num[i]) {
            min = num[i];
        }
    }
    printf("%lld\n", max);
    printf("%lld\n", min);
    return 0;
}

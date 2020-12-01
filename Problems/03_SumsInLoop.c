#include <stdio.h>

#define LEN 15

int main(void)
{
    int num1[LEN];
    int num2[LEN];
    int sum[LEN];
    int i;

    for (i = 0; i < LEN; ++i) {
        scanf("%d%d", &num1[i], &num2[i]);
        sum[i] = num1[i] + num2[i];
    }
    for (i = 0; i < LEN; ++i)
        printf("%d ", sum[i]);
}

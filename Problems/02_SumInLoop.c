#include <stdio.h>

#define MAX 40

int main(void)
{
    unsigned int i, num;
    unsigned int sum = 0;

    for (i = 1; i <= MAX; i++) {
        scanf("%u", &num);
        sum += num;
    }
    printf("%u\n", sum);
}

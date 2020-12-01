#include <cstdio>

#define LEN 30

int main(void)
{
    long int a[LEN];
    long int b[LEN];
    long int min[LEN];
    int i;

    for (i = 0; i < LEN; ++i) {
        scanf("%ld%ld", &a[i], &b[i]);

        if (a[i] < b[i]) {
            min[i] = a[i];
        }
        else if (b[i] < a[i]) {
            min[i] = b[i];
        }
    }
    for (i = 0; i < LEN; ++i) {
        printf("%d ", min[i]);
    }
    return 0;
}

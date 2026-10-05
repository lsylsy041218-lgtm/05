#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int sum = 0;

    printf("input a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("The result is %d\n", sum);

    return 0;
}
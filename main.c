#include <stdio.h>

int main(void)
{
    int x;

    printf("정수 하나를 입력하시오. :");
    scanf("%d", &x);

    if (x > 0)
        printf("양수입니다.\n");
    else if (x < 0)
        printf("음수입니다.\n");
    else
        printf("0 입니다.\n");

    return 0;
}
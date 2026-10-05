#include <stdio.h>

int main(void)
{
    int x;

    printf("정수 하나를 입력하시오 :");
    scanf("%d", &x);

    if (x < 0)
        x = -x;

    printf("절대값은 %d 입니다.\n", x);

    return 0;
}
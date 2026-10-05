#include <stdio.h>

int main(void)
{
    int a, b;
    int result;
    char op;

    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0)
        {
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
        result = a / b;
        break;
    case '%':
        if (b == 0)
        {
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
        result = a % b;
        break;
    default:
        printf("지원하지 않는 연산자입니다.\n");
        return 0;
    }

    printf("%d %c %d = %d\n", a, op, b, result);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int c;
    int num = 0;

    printf("input a string: ");

    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (c >= '0' && c <= '9')
            num++;
    }

    printf("the number of digits is %d\n", num);

    return 0;
}
#include <stdio.h>

int print_sign(int n);

int main(void)
{
    int number = -10;
    int sign = print_sign(number);
    printf("The sign of %d is %d\n", number, sign);

    return 0;
}

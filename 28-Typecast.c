#include <stdio.h>

int main()
{
    float num = 4.55;
    float *ptr = &num;
    printf("num = %f\n", *ptr);

    printf("\nAfter typecasting num to int:\nnum = %d", (int)num);

    return 0;
}
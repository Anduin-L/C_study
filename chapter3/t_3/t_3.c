#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter a floating-point value:");
    scanf("%f", &num);
    printf("fixed-point notation:%f.6\n", num);
    printf("exponential-point notation:%e\n", num);
    printf("Ox notation:%a\n", num);
    return 0;
}
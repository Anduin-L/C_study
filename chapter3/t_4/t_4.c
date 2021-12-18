#include <stdio.h>

int main(void)
{
    unsigned long long  misc = 0;
    const int a = 3.156e7;
    int age = 0;
    printf("Please input your age:");
    scanf("%d", &age);
    while(age < 0) {
        printf("Please input positive number:");
        scanf("%d", &age);
    }
    misc = age * a;
    printf("Your age in millisecond is %llu\n", misc);
    return 0;
}
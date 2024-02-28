#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, largest, num3;
    printf("num1 > ");
    scanf("%d",&num1);
    printf("num2 > ");
    scanf("%d",&num2);
    printf("num3 > ");
    scanf("%d",&num3);

    if (num1 > num2) {
        largest = num1;
    }
    else {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    printf("%d", largest);
    return 0;
}

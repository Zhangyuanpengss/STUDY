#include <stdio.h>

int main(void)
{
    int num1, num2, largest, num3;
    printf("Give the 1st number:");
    scanf("%d",&num1);
    printf("Give the 2nd number:");
    scanf("%d",&num2);
    printf("Give the 3rd number:");
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
    printf("The greatest of the numbers %d,%d,%d is %d",num1,num2,num3,largest);
    return 0;
}

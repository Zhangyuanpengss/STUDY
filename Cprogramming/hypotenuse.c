#include<stdio.h>
#include<math.h>

double calculateHypotenuse(double num1,double num2);

int main()
{
    double side1 = 0.0;
    double side2 = 0.0;
    double hypotenuse = 0.0;

    printf("\n Give the 1st side > ");
    scanf("%lf", &side1);
    printf("\n Give the 2nd side > ");
    scanf("%lf", &side2);
    calculateHypotenuse(side1,side2);
    return 0;
}

double calculateHypotenuse(double num1,double num2)
{
    printf("\nHypotenuse is %.2lf",sqrt((num1*num1)+(num2*num2)));
}

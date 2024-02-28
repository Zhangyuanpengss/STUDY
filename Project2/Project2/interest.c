#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double totallnterest;
	double interest;
	double loan;
	int numberOfDays;
	printf("Your number of days?");
	scanf("%d", &numberOfDays);
	printf("Your interest?");
	scanf("%lf", &interest);
	printf("How much are you loan?");
	scanf("%lf", &loan);
	printf("Give the amount of loaned money > %.2lf\n", loan);
	printf("Give the interest > %.1lf\n", interest);
	printf("Give the number of days (time period) > %d\n", numberOfDays);
	printf("The total interest for the loan amount of %.2lf yuan, for %d days with the interest %.2lf, is %.2lf yuan.\n", loan, numberOfDays, interest, loan * interest/100 * numberOfDays / 365) ;
	return 0;
}
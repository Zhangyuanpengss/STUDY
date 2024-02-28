#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hours;
	int hourlywage;
	printf("Your hours?");
	scanf("%d", &hours);
	printf("Your hourly wage?");
	scanf("%d", &hourlywage);
	printf("Give the hours > %d\n",hours);
	printf("Give the hourly wage > %d\n",hourlywage);
	printf("Your salary is %d yuan\n", hours * hourlywage);
	return 0;
} 	
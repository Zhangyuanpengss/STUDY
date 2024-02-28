#include<stdio.h>

double calculateParkingFee(double);

int main()
{
double cost=0,time1,time2,time3;
int i;
printf("\nPlease input time1 > ");
scanf("%lf",&time1);
printf("\nPlease input time2 > ");
scanf("%lf",&time2);
printf("\nPlease input time3 > ");
scanf("%lf",&time3);
printf("Customer     Hours     Charge\n");
printf("       1      %.2lf        %.2lf\n",time1,calculateParkingFee(time1));
printf("       2      %.2lf        %.2lf\n",time2,calculateParkingFee(time2));
printf("       3      %.2lf        %.2lf\n",time3,calculateParkingFee(time3));
printf("   TOTAL      %.2lf        %.2lf",time1+time2+time3,calculateParkingFee(time1)+calculateParkingFee(time2)+calculateParkingFee(time3));
return 0;
}

double calculateParkingFee(double time)
{   double money=0;
    if (time<=3)
    {
        money=2;
    }
    else
    {
        money=2+((time-3)*0.5);
        if (money>10)
        {
            money=10;
        }
    }
return money;
}

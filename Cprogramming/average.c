#include <stdio.h>

int main(void)
{
    int count=0;
    double i,sum=0;
    do
    {
        printf("Give a positive real number (negative will stop):");
        scanf("%lf",&i);
        if(i>=0)
        {
        sum=sum+i;
        count=count+1;
        }



    }while(i>=0);

printf("Average is %.2lf",sum/count);

return 0;
}

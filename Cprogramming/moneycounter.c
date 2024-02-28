#include <stdio.h>

void TheXto1(int myArray[][10], int rows)
{
    int i=0;
    for(i=0;i<rows;++i)
    {
        printf("Give the salary for the %d. employee > ",i+1);
        scanf("%d",&myArray[i][0]);
    }
}

void calculate(int myArray[][10],int rows,int cols)
{
    int chucun[9],salary=0,j=0,SUM500=0,SUM200=0,SUM100=0,SUM50=0,SUM20=0,SUM10=0,SUM5=0,SUM2=0,SUM1=0;
    for(int i=0;i<rows;++i)
    {
        salary=myArray[i][0];
        SUM500=salary/500;
        salary=salary-500*SUM500;
        SUM200=salary/200;
        salary=salary-200*SUM200;
        SUM100=salary/100;
        salary=salary-100*SUM100;
        SUM50=salary/50;
        salary=salary-50*SUM50;
        SUM20=salary/20;
        salary=salary-20*SUM20;
        SUM10=salary/10;
        salary=salary-10*SUM10;
        SUM5=salary/5;
        salary=salary-SUM5*5;
        SUM2=salary/2;
        salary=salary-SUM2*2;
        SUM1=salary/1;
        int chucun[9]={SUM500,SUM200,SUM100,SUM50,SUM20,SUM10,SUM5,SUM2,SUM1};
        for(j=1;j<cols;++j)
        {
            myArray[i][j]=chucun[j-1];
        }
    }

}

void printtable(int myArray[][10],int rows,int cols)
{   int i=0,j=0;
    for(i=0;i<rows;++i)
    {
        for(j=0;j<cols;++j)
        {
            printf("  ");
            printf("%4d",myArray[i][j]);


        }
    printf("\n");
    }

}

int total(int myArray[][10],int rows,int cols)
{   int total=0,i=0;
    for(i=0;i<rows;++i)
    {
        total=total+myArray[i][cols];
    }
    return total;
}


int main(void)
{
    int Array[5][10]={{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
    TheXto1(Array, 5);

    calculate(Array,5,10);

    printf("Salary   500   200   100    50    20    10     5     2     1\n");
    printtable(Array,5,10);
    //printf("Total:   %d    %d    %d     %d    %d    %d    %d    %d    %d",total(Array,5,1);,total(Array,5,2);,total(Array,5,3);,total(Array,5,4);,total(Array,5,5);,total(Array,5,6);,total(Array,5,7);,total(Array,5,8);,total(Array,5,9););
    printf(" Total:    %d     %d     %d     %d     %d     %d     %d     %d     %d",total(Array,5,1),total(Array,5,2),total(Array,5,3),total(Array,5,4),total(Array,5,5),total(Array,5,6),total(Array,5,7),total(Array,5,8),total(Array,5,9));

return 0;
}



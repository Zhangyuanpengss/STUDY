#include <stdio.h>




int findGreatest(int myArray[])
{   int MAX=0,index,i;
    for(i=0;i<10;++i)
    {
        if(MAX<=myArray[i])
        {
            MAX=myArray[i];
            index=i;
        }
    }
    return index;
}



void fillTable(int myArray[])
{   int num;
int i;
    for(i=0;i<10;++i)
    {
        printf("Give the %d. number > ",i+1);
        scanf("%d",&num);
        if(num<0 || num>100)
        {
            --i;
        }
        else
        {
            myArray[i]=num;
        }
    }
}


void printTable(int myArray[])
{   int j;
    printf("For the array:\n");
    for(j=0;j<10;++j)
    {
        printf("%d ",myArray[j]);
    }

}



double calculateAverage(int myArray[])
{   int SUM=0;
    int i;
    double average;
    for(i=0;i<10;++i)
    {
        SUM=myArray[i]+SUM;
    }
    average=(double)SUM/(double)(i);
    return average;

}

int main(void)
{
    int Array[10];
    fillTable(Array);
    findGreatest(Array);
    printTable(Array);


    printf("\n\n\n\nThe greatest value is %d which is in index %d\nThe average of the values in the array is %.3lf",Array[findGreatest(Array)],findGreatest(Array),calculateAverage(Array));



return 0;
}

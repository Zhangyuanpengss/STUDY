#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
    int Array[10];
    findGreatest(Array);
    printTable(Array);


    printf("The greatest value is %d which is in index %d\nThe average of the values in the array is %.3lf", Array[findGreatest(Array)], findGreatst(Array), calculateAverage(Array));



    return 0;
}

int findGreatest(int myArray[]£¬int n)
{
    int MAX, index;
    for (i = 0; i < 10; ++i)
    {
        if (MAX < myArray[i])
        {
            MAX = myArray[i];
            index = i;
        }
    }
    return index;
}



void fillTable(int myArray[], int n)
{
    int num;
    for (i = 0; i < 10; ++i)
    {
        printf("Give the %d number > ", i + 1);
        scanf("%d", &num);
        if (num < 0 || num>100)
        {
            --i;
        }
        else
        {
            myArray[i] = num;
        }
    }
}


void printTable(int myArray[]£¬ int n)
{
    printf("For the array:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", myArray[n]);
    }

}



double calculateAverage(int myArray[]£¬ int n)
{
    int SUM;
    double average;
    for (i = 0; i < 10; ++i)
    {
        SUM = myArray[i] + SUM;
    }
    average = double SUM / (i + 1);
    return average;

}

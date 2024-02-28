#include <stdio.h>

int main(void)
{
int i=1,j=1,e=1;
for(i=1;i<=8;i=i+1)
{

    for(j=7;j>=i;--j)
    {
        printf(" ");
    }

    for(e=0;e<i;++e)
    {
        printf("a");
    }

 printf("\n");
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str1[20][101];
    FILE *fp;
    fp=fopen("C:/Users/¶¹¸¯ÄÔ/Documents/dict.txt","r");
    for(int i=0;i<10;i++)
    {
        fgets(str1[i],20,fp);
        printf("%s\n",str1[i]);
    }




return 0;
}

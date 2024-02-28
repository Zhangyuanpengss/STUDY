#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str1[10000];
    char str2[20][101];
    char str3[20][101];
    char str4[20][101];
    fp=fopen("C:/Users/¶¹¸¯ÄÔ/Documents/dict.txt","r");
    fgets(str1,1000,fp);
    printf("%s\n",str1);





    return 0;
}

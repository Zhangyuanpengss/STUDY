#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE* fp;
    char str1[10000];
    char str2[20][101];
    char str3[20][101];
    char str4[20][101];
    char str5[101] = { 0 };
    fp = fopen("C:/Users/¶¹¸¯ÄÔ/Documents/dict.txt", "r");
    fgets(str1, 1000, fp);
    printf("%s\n", str1);
    for (int i = 0; i < 20; i++)
    {
        str2[i][101] = strtok(str1, ";");
    }





    return 0;
}

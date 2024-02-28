#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE* fp;
    char str1[10000];
    fp = fopen("C:/Users/¶¹¸¯ÄÔ/Documents/dict.txt", "r");
    fgets(str1, 1000, fp);
    printf("%s", str1);
    fclose(fp);
    char* str2[20][101];
    int i = 0;
    while (1)
    {
        i++;
        if (str1[i] == " ")
        {
            break;
        }
        str2[i][101] = strtok(str1, ";");
    }
    char str3[20][101];
    char str4[20][101];

    for (int i = 0; i < 20; i++)
    {
        int j = 0, k = 0;
        if (i % 2 == 0)
        {
            str3[j][101] = str2[i];
            j++;
        }
        else
        {
            str4[k][101] = str2[i];
            k++;
        }
    }
    char str5[101] = { 0 };
    printf("Give a word (max 100 characters) > ");
    scanf("%s", str5[0]);
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(str5, str4[i]) == 0)
        {
            printf("%s", str3[i]);
        }
    }


    return 0;
}
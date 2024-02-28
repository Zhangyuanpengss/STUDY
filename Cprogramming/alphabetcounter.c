#include <stdio.h>
int main(void)
{
    char str1[101]={0},str2[101]={0},str3[101]={0};
    do
    {
        printf("Give a string (max 100 characters) > ");
        scanf("%s",str1);
    }while(strlen(str1)>100);
    do
    {
        printf("Give a string (max 100 characters) > ");
        scanf("%s",str2);
    }while(strlen(str2)>100);
    do
    {
        printf("Give a string (max 100 characters) > ");
        scanf("%s",str3);

    }while(strlen(str3)>100);


    int COUNT[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char ZIMU[27]={"abcdefghijklmnopqrstuvwxyz"};

    for(int i=0;i<strlen(str1);++i)
    {
        for(int j=0;j<24;++j)
        {
            if(ZIMU[j]==str1[i])
            {
                ++COUNT[j];
            }
        }

    }
    for(int i=0;i<strlen(str2);++i)
    {
        for(int j=0;j<24;++j)
        {
            if(ZIMU[j]==str2[i])
            {
                ++COUNT[j];
            }
        }

    }
    for(int i=0;i<strlen(str3);++i)
    {
        for(int j=0;j<24;++j)
        {
            if(ZIMU[j]==str3[i])
            {
                ++COUNT[j];
            }
        }

    }
printf("Alphabet Count\n");
for(int i=0;i<26;++i)
{
    printf("%c  %d\n",ZIMU[i],COUNT[i]);
}
}

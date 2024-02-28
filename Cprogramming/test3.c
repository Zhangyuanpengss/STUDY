#include <stdio.h>
void solve(char myArray[])
{
    int SUM[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char ZIMU[27]={"abcdefghijklmnopqrstuvwxyz"};
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<strlen(myArray[i]-1);j++)
        {
                for(int h=0;h<26;h++);
                {
                    if(myArray[i][j]==ZIMU[h])
                    {
                        ++SUM[h];
                    }
                }
        }

    }
    for(int i=0;i<26;i++)
    {
        print("%c %d",ZIMU[i],SUM[i]);
    }
}
int main(void)
{
    char str[3][101];
    for(int i=0;i<3;++i)
    {   printf("Give a string (max 100 characters) > ");
        fgets(str[i],102,stdin);
    }
    solve(str);
}

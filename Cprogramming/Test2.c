#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[5][101];
    for(int i=0;i<5;++i)
    {   printf("Give a string (max 100 characters) > ");
        fgets(str[i],102,stdin);

    }
    for(int i=0;i<5;i++)
    {

        if(str[i][(strlen(str[i]))-2]=='r' && str[i][strlen(str[i])-3]=='e')
        {

            printf("A string ending with the letters er is %s\n", str[i]);
        }

    }
return 0;
}

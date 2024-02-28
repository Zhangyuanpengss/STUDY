#include <stdio.h>
#include <stdio.h>

int same(char array1[],char array2[])
{
    for(int i=0;i<strlen(array2);i++)
    {
        if(array1[i]!=array2[i])
        {
            return 0;
            break;
        }
        else
        {
            return 1;
        }
    }
}



int main(void)
{
    char str1[10]={"hshshshsh"};
    char str2[10]={"hshshshsh"};
    if(same(str1,str2))
    {
        printf("same");
    }
}

#include <stdio.h>

int main(void)
{
printf("Please input your points > ");
int num=100;
scanf("%d",&num);
switch(num) {
 case 0 ... 11:
     printf("Fail");
     break;
 case 12 ... 13:
     printf("1");
     break;
 case 14 ... 16:
     printf("2");
     break;
 case 17 ... 19:
     printf("3");
     break;
 case 20 ... 22:
     printf("4");
     break;
 case 23 ...24 :
     printf("5");
     break;
 default:
    printf("Points are not correct!");
}
return 0;
}




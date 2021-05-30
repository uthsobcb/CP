#include<stdio.h>

int main()
{
    int day, a, b;

    scanf("%d",&day);
    a=day/365;

    day%=365; 
    b=day/30;
    day%=30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,day);


    return 0;
}

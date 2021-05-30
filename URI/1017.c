#include<stdio.h>
int main()
{
    int a,b;
    double c,d;
    scanf("%d %d",&a,&b);
    c = a*b;
    d = c/12;
    printf("%0.3lf\n",d);
    return 0;
}

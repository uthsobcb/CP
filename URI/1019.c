#include<stdio.h>

int main()
{
    int t, h, m;
        scanf("%d",&t);
    h=t/3600;
    t=t-(h*3600);

    m=t/60;
    t=t-(m*60);

    printf("%d:%d:%d\n",h,m,t);
    return 0;
}

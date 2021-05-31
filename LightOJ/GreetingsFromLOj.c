#include <stdio.h>
int main()
{
   int t,a,b,c=0,d;
   scanf("%d", &t);
   for(d=1; d<=t; d++)
   {
        scanf("%d%d", &a, &b);
        c=a+b;
        printf("Case %d: %d\n",d,c);
   }
   return 0;
}
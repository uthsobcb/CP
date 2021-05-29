#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int res = 0;
    int flag;
    int high=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&flag);
        if(flag>high)
        {
            high=flag;
        }
        if(flag==i && high<=i)
        {
            res++;
        }
    }
    printf("%d",res);
    return 0;
}

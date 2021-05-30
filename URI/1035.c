#include<stdio.h>

int main()
{
    int a,b,c,d, ka, n, reminder;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    ka=c+d;
    n=a+b;
    reminder=a%2;
    if(b>c && d>a && ka>n && c>0 && d>0 && reminder==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}

    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        if(n == 4||n == 7||n == 44||n == 47||n == 77||n == 74||n == 444 || n == 447 || n == 477 || n == 777||n == 774||n == 744||n == 747) {
            printf("YES");
        }
        else if(n%4 == 0||n %7 == 0||n%44==0||n%47==0||n%77==0||n%74==0||n%444==0||n%447==0||n%477==0||n%777==0||n%774==0||n%744==0||n%747==0) {
            printf("YES");
        }
        else{
            printf("NO");
        }
        return 0;
    }

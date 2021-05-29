#include<stdio.h>
#include<string.h>
 
int main () {
    int i, n, r=1;
    char str[10];
    gets(str);
    n=strlen(str);
    //for(i=0;i<n;i++) printf("%c ", str[i]);
 
    while(str[n-1] == '0' && n>0 ) n--;
 
    for(i=0;i<n;i++)
        if(str[i] != str[n-i-1]) r=0;
 
    if(r==1) printf("YES");
    else printf("NO");
}

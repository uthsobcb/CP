#include <stdio.h>
 
int main(){
    long long i,j,k,l,t,cas=1,sq,n,tmp,tmpOdd,tmpEven;
 
    scanf("%lld",&t);
    while( t-- ){
        scanf("%lld",&n);
        printf("Case %lld: ",cas++);
        tmpEven = 1;
        while(n){
            if( !(n & 1) ){
                tmpEven <<= 1;
                n >>= 1;
                if( n & 1){
                    printf("%lld %lld\n",n,tmpEven);
                    break;
                }
            }
            else{
                printf("Impossible\n");
                break;
            }
        }
    }
    return 0;
}
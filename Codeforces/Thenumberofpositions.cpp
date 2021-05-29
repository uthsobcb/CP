#include<stdio.h>
int main()
{
 int val,ls,ms;
 scanf("%d %d %d",&val,&ls,&ms);
 int ll= 0;
 for(int l = 1; l <= val; l++){
 if(l-1 >= ls && val-l <= ms){
 ll++;
 }
 }
 printf("%d",ll);
 return 0;
}

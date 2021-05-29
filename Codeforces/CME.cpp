#include<stdio.h>
int main()
{
  int i,q,n;
  scanf("%d",&q);
  for(i = 0; i<q; i++){
  scanf("%d",&n);
  if(n == 2){
  printf("2\n");
  }
  else if(n%2 == 0 && n>2){
  printf("0\n");
  }
  else{
  printf("1\n");
  }
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int n,temp,r,sum=0;
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
  }
  n=temp;
  if(n==sum)
  {
    printf("yes");
  }
  else{
    printf("no");
  }

  return 0;
}

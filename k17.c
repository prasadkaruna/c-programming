#include <stdio.h>
int main()
{
  int a,b,n,r=0,i;
  scanf("%d",&a);
  b=a;
  while(b>0)
  {
    n=b%10;
    r+=n*n*n;
    b/=10;
  }
  if(r==a)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
}

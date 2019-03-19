#include<stdio.h>
int main()
{
  int a,r,sum=0;
  scanf("%d",&a);
  while(a)
  {
    r=a%10;
    sum=sum*10+r;
    a/=10;
  }
  printf("%d",sum);
}

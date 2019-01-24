
#include<stdio.h>
void main()
{
  int a,p=1,i;
  scanf("%d",&a);
  for(i=a-1;i>0;i--)
  {
    p+=p*i;
  }
  printf("%d",p);
}

#include <stdio.h>
int main()
{
  int a,b,i,c[10],sum=0;
  scanf("%d%d",&a,&b);
  for(i=0;i<a;i++)
  {
    scanf("%d",&c[i]);
  }
  for(i=0;i<b;i++)
  {
    sum=sum+c[i];
  }
  printf("%d",sum);
  return 0;
}

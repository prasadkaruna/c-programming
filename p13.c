#include<stdio.h>
int main()
{
  int a,b,c,sum=0;
  scanf("%d",&a);
  while(a>0)
	{
		b=a%10;
		c=b*b;
		sum=sum+c;
		a=a/10;
	}
  printf("%d",sum);
  }

#include<stdio.h>
int main()
{
  int a,b,c=0,k=0,i,j;
  scanf("%d %d",&a,&b);
  for(j=a;j<=b;j++)
  {
    for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			k=1;
			break;
		}
		else
		{
			k=0;
		}
	}
	if(k==0)
	{
		c=c+1;
	}
	}
	printf("%d",c);
}

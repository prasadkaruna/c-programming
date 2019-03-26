#include<stdio.h>
int main()
{
  char a[100000],k;
  int i,j,c=0,b=0;
  scanf("%[^\n]s",a);
  for(i=0;a[i]>0;i++)
  {
    for(j=i+1;a[j]>0;j++)
    {
      if(a[i]==a[j])
      {
        c=c+1;
      }
    }
    if(c>b)
    {
      k=a[i];
      b=c;
    }
  }
    printf("%c",k);
}

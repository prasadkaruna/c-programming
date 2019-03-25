#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,l,p,c=0;
  scanf("%s%s",a,b);
  l=strlen(a);
  p=strlen(b);
  for(i=0;i<l;i++)
  {
    if(l!=p)
    {
      printf("no");
      break;
    }
    else if(a[i]==b[i])
    {
      c=c+0;
    }
    else
    {
      c=c+1;
    }
  }
  if(c==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}

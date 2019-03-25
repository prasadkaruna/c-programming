#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,j,l,p,flag=1,u,v;
  scanf("%s%s",a,b);
  l=strlen(a);
  p=strlen(b);
  if(l==p)
  {
    for(i=0;i<l;i++)
    {
      for(j=i+1;j<p;j++)
      {
        u=a[i]-a[j];
        v=b[i]-b[j];
        
          if(u==v)
          {
            flag=0;
          }
          else
          {
            flag=1;
            break;
          }
          
      }
    }
    }

  if(flag==1)
  {
  printf("no");
  }
  else
  {
    printf("yes");
  }
}

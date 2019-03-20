#include <stdio.h>
#include<string.h>
int main()
{
  char a[100000],l,i,k=0;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
      {
        a[i]='k';
      }
  }
  for(i=l-1;i>=0;i--)
  {
    if(a[i]!='k')
    {
      printf("%c",a[i]);
    }
  }
}

#include<stdio.h>
void main()
{
  char a;
  scanf("%c",&a);
  if((a>=65&&a<=90)||(a>=97&&a<=122))
  {
    printf("alphabet");
  }
  else
  {
    printf("no");
  }
}

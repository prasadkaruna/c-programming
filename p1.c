
#include<stdio.h>
#include<string.h>
void main()
 {
   int i,p;
   char a[100];
   scanf("%s",a);
   p=strlen(a);
   for(i=p-1;i>=0;i--)
   {
    printf("%c",a[i]);
   }
}

#include <stdio.h>
void main()
{
  char b;
  scanf("%c",&b);
  if(b>=65&&b<=90||b>=97&&b<=122)
  {
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
   { printf("vowel");}
   else if(b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
   {printf("vowel");}
  else {
    printf("consonant");
  }}
  else
  {
    printf("invalid");
  }
  
}

#include<stdio.h>
#include<string.h>
int main()
{
  //copy string
  char s1[] = "shiva shankar";
  char* s2 = s1;
  s1[0] = 'm';
  printf("%s",s2);
  return 0;
  //this is known as shalow copy
}
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "shivashankar";
    char s2[] = "shivashankar";
    s2[0] = 'm';
    printf("%s\n",s1);
    printf("%s",s2);
    // printf("%p\n",s1);
    // printf("%p",s2);
    return 0;
}
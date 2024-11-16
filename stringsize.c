#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "shivashankar";
    int length = strlen(str);
    char str2[length+1];
    for(int i=0;i<length;i++)
    {

        str2[i] = str[i]; 
    }
    str2[length] = '\0'; 
    str2[1] = 'k';
    printf("Original string : %s\n", str);
    printf("Copied string   : %s\n", str2);

    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the size of string:");
    scanf("%d",&n);
    char a[n];
    printf("Enter the character:");
    scanf("%s",a);
    printf("The eneterd character was:%s\n",a);
    int size = strlen(a);
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("the reversed string is %s",a);
    return 0;
}

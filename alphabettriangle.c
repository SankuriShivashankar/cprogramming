#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        int a=1;
        for(int j=1;j<=i;j++)
        {
        int d = a+64;
        char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
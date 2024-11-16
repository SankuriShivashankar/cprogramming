#include<stdio.h>
int main()
{
    int n;
    printf("enter no of lines:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}
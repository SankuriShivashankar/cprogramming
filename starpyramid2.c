#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
         for(int m=1;m<=nst;m++)
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
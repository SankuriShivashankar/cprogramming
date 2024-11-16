#include<stdio.h>
int main()
{
    int n;
    printf("enter no of lines:");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}
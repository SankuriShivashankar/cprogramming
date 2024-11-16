#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    int m;
    printf("enter number of colomns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 || i==n || j==1 || j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
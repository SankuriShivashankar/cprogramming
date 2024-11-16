#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    int m;
    printf("enter number of colomns:");
    scanf("%d",&m);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
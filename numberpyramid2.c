#include<stdio.h>
int main()
{
    int n;
    printf("eneter number of lines:");
    scanf("%d",&n);
    int nsp =n-1;
    for(int i=1;i<=n;i++)
    {
        int a = i-1;
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int q=1;q<=i-1;q++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
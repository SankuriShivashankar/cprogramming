#include<stdio.h>
int main()
{
    int n;
    printf("enter number lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(i==3 || j==3)
            {
                printf("*",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
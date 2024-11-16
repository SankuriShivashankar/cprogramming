#include<stdio.h>
int main()
{
    int r;
    printf("enter no of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no of columns:");
    scanf("%d",&c);
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           arr[i][j]=10;
        }
    }
    printf("\nthe matrix is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
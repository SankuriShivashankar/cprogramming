#include<stdio.h>
int main()
{
    int r;
    printf("enter no of rows:\n");
    scanf("%d",&r);
    int c;
    printf("enter no of columns:\n");
    scanf("%d",&c);
    int arr1[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element at position [%d][%d]: ", i+1, j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<=2;i++)
    {
        for(int j=1;j<4;j++)
        {
            sum = sum + arr1[i][j];
        }
    }
    printf("the rsultant matrix after addition is %d",sum);
}
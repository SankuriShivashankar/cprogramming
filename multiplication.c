#include<stdio.h>
int main()
{
    int r;
    printf("enter no of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no of colomns:");
    scanf("%d",&c);
    int arr1[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter the elements of array[%d][%d]",i+1,j+1);
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
    printf("\n");
    int r1;
    printf("enter no of rows:");
    scanf("%d",&r1);
    int c2;
    printf("enter no of coloumns:");
    scanf("%d",&c2);
    int arr2[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("enter the elements of array[%d][%d]",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(c!=r1)
    {
        printf("the matrices cannot be multiplied");
    }
    else
    {
        int res[r][c2];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c2;j++)
            {
                res[i][j] = 0;
                for(int k=0;k<c;k++)
                {
                    res[i][j] = res[i][j] + arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
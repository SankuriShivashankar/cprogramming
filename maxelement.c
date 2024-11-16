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
    int max = arr1[0][0];
    int max_row = 0,max_col = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(max<arr1[i][j])
           {
            max = arr1[i][j];
            max_row = i;
            max_col = j;
           }
        }
    }
    printf("The maximum element is %d at position [%d][%d]\n",max,max_row+1,max_col+1);
    return 0;
}
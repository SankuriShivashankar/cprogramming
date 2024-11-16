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
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ",arr1[i][j]);
            }
        }
        else
        {
            for(int j=c-1;j>=0;j--)
            {
                printf("%d ",arr1[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

}

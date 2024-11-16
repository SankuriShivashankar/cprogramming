#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows/columns:");
    scanf("%d",&n);
    printf("enter all the elements");
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the elements [%d][%d]",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

}
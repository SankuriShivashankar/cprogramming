#include<stdio.h>
int main()
{
    int r;
    printf("enter the size of array:");
    scanf("%d",&r);
    int c;
    printf("enter the size of array:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter element a position [%d][%d]",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int maxcount = 0;
    int maxidx = 0;
    for(int i=0;i<r;i++)
    {
        int count = 0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j] == 1) count++;
        }
        if(maxcount<count)
        {
            maxcount = count;
            maxidx = i;
        }
        printf("\n");
    }
    printf("the maximum number of 1's are in the row %d",maxidx);


}
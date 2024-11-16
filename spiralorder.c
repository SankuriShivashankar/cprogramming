#include<stdio.h>
int main()
{
    int m;
    printf("enter no of rows:");
    scanf("%d",&m);
    int n;
    printf("enter no of colomns:");
    scanf("%d",&n);
    int arr1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the elements of array[%d][%d]",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    //spiral print
    printf("\n");
    int minr = 0;
    int max = m-1;
    int minc = 0;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;
    while(count<tne)
    {
        //print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++)
        {
            printf("%d ",arr1[minr][j]);
            count++;
        }
        minr++;
        //print the max column
        for(int i=minr;i<=max && count<tne;i++)
        {
            printf("%d ",arr1[i][maxc]);
            count++;
        }
        maxc--; 
         //print maximum row
        for(int j=maxc ;j>=minc && count<tne;j--)
        {
            printf("%d ",arr1[max][j]);
            count++;

        }
        max--;
        //print the minimum coloumn
        for(int i=max;i>=minr && count<tne;i--)
        {
            printf("%d ",arr1[i][minc]);
            count++;
        }
        minc++;
        
    }
    return 0;

}

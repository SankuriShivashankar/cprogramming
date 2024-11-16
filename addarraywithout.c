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
    int r1;
    printf("enter no of rows:\n");
    scanf("%d",&r1);
    int c1;
    printf("enter no of columns:\n");
    scanf("%d",&c1);
    if (r != r1 || c != c1) {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        return 1;
    }

    int arr2[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter element at position [%d][%d]: ", i+1, j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];

        }
    }
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    
}
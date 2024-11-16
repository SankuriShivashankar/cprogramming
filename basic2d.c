#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c]; 

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix in proper format
    printf("\nThe matrix is:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

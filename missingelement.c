#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter the element no:\n");
        scanf("%d",&arr[i]);
    }
    int sum1 = 0;
    for(int i=0;i<=n-1;i++)
    {
        sum1 = sum1+arr[i];
    }
    int sum2 = 0;
    for(int i=0;i<=n-1;i++)
    {
        sum2 = n*(n+1)/2;
    }
    int missing;
    missing = sum2 - sum1;
    printf("the missing term is %d",missing);
    return 0;

}
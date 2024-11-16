#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter the element no\n");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }
    return 0;
}
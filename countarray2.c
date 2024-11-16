#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    int x = 5;
    for(int i=0;i<=n-1;i++)
    {
        printf("enter the element no\n");
        scanf("%d",&arr[i]);
        if(arr[i]>x) count++;
    }
    printf("%d",count);
    return 0;
}
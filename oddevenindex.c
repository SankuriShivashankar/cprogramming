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
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
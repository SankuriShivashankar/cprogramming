#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element no\n");
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=1;i<=n-1;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    int smax=arr[0];
    for(int i=1;i<=n-1;i++)
    {
        if(smax<arr[i] && arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    printf("first max number is %d\n",max);
    printf("second max number is %d",smax);
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element no :\n");
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i=1;i<=n-1;i++)
    {
        printf("checking array[%d] = %d\n",i,arr[i]);
        if(arr[i]<min)
        {
            min = arr[i];
            printf("new min found : %d\n",min);
        }
    }
    printf("Minimum %d\n",min);
    return 0;
}
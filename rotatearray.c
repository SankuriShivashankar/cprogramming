#include<stdio.h>
void revrese(int n,int arr[])
{
    
    int i=0;
    int j=n;
    while(i<=j)
    {
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter the element no\n");
        scanf("%d",&arr[i]);
    }
    revrese(n-1,arr);
    for(int i=0;i<=n-1;i++)
    {
    printf("%d ",arr[i]); 
    }
    return 0;
}
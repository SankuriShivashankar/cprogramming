#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
    while(si<ei)
    {
        int temp=arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;
        si++;
        ei--;
    }
    return;
}
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element no\n");
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter the ways:");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
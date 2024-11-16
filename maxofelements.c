#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter the element no\n");
        scanf("%d",&a[i]);
    }
    int max = a[0];

    for(int i=1;i<=n-1;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}
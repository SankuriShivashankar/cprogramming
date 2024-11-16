#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the elements of array[%d]",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i])
        {
            smax = arr[i];
        }
    }
    if(smax == INT_MIN)
    {
        printf("there is no second largest elemnt\n");
    }
    else {
        printf("The second largest element is %d\n", smax);
    }
}
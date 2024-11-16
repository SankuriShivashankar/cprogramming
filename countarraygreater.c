#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int x=4;
    int count=0;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]>x) count++;
    }
    printf("%d ",count);
}
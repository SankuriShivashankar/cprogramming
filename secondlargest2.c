#include<stdio.h>
int main()
{
    int arr[5] ={3,4,4,5,1};
    int max = 0;
    int smax = 0;
    for(int i=0;i<=7;i++)
    {
        if(max<arr[i])
        {
            smax = max; //smax is now previous max
            max = arr[i]; // max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i])
        {
            smax=arr[i];
        }
        
    }
    printf("%d",smax);
    return 0;

}
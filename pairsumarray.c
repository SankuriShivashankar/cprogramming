#include<stdio.h>////wrong
int main()
{
    //int n;
    //printf("enter the size of array:");
    //scanf("%d",&n);
    //int arr[n];
    int arr[9] = {1,2,3,4,5,6,7,8};
    int x = 12;
    printf("enter a number:");
    scanf("%d",&x);
    int totalpairs=0;
    for(int i=0;i<=7;i++)
    {
        //printf("enter element no\n");
        //scanf("%d",&arr[i]);
        for(int j=i+1;j<=7;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }

    }
    printf("%d",totalpairs);
    return 0;

}
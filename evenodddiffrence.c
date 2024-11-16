#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7};
    int even=0,odd=0;
    int difference;
    for(int i=0;i<=6;i++)
    {
        if(i%2==0)
        {
            even = even+arr[i];
        }
        if(i%2!=0)
        {
            odd = odd+arr[i];
        }
    }
    printf("the difference of even and odd is %d",difference=even-odd);
    return 0;
}
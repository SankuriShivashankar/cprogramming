#include<stdio.h>
void swap(int a[])
{
    int temp =a[0];
    a[0] = a[1];
    a[1] = temp;
    return;
}
int main()
{
    int a[2] ={2,9};
    printf("%d %d\n",a[0],a[1]);
    swap(a);
    printf("%d %d\n",a[0],a[1]);
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
           int d = a+64;
           char ch = (char)d;
           if(i%2==0)
           {
            printf("%c",ch);
            a++;
           }
           else
           {
            printf("%d",j);
           }
        }
        printf("\n");
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of lines:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int m=1;
    for(int i=1;i<=2*n+1;i++)
    {
        int k=m+64;
        char ch1=(char)k;
        printf("%c",ch1);
        m++;
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
            a++;
        }
        
        for(int j=1;j<=nst;j++)
        {
            int d=a+64;
            char ch2=(char)d;
            printf("%c",ch2);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
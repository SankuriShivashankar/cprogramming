#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
         {
            printf("%c", (char)(j + 64)); // Type casting to print character
    }
    for (k = i + 1; k <= 4; k++)
    {
        printf("%c", (char)(k + 74));
    }
    printf("\n");
    }

  return 0;
}
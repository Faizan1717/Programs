#include <stdio.h>

int main()
{
    int i, j, space;
    int n = 5;   // height of pyramid

    for(i = 1; i <= n; i++)
    {
        // Print leading spaces
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        // Print stars and spaces
        for(j = 1; j <= 2*i - 1; j++)
        {
            if(i == n || j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
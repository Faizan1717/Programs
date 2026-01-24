#include <stdio.h>
int main()
{

    int i, j;
    int rows = 5;

    //Outer loop control rows
    for(i=1; i<=rows; i++)
    {

        //Print spaces
        for(j=1; j<= rows - i; j++)
        {
             printf(" ");

        }
        
        //Print stars
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
       //Move to next line 
        printf("\n");
    }
return 0;

}
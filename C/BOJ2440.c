#include <stdio.h>
int main(void)
{
    int i , j;
    for(i = 5; i >0; i--)
    {
        for(j = 5; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
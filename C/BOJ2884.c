#include <stdio.h>

int main(void)
{
    int hour , minute;
    scanf("%d %d",&hour,&minute);
    if(minute > 44)
    {
        printf("%d %d",hour,minute - 45);
    }
    else if (hour == 0 && minute < 45)
    {
        printf("%d %d",23,minute + 15);
    }
    else
    {
        printf("%d %d",hour -1,minute +15);
    }
    return 0;
}
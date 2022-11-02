#include <stdio.h>

int main(void)
{
    int T , A , B;
    scanf("%d\n",&T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d\n",&A,&B);
        printf("%d\n",A + B);
    }
    return 0;
}
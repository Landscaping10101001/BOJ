#include <stdio.h>

int main(void)
{
    int N;
    
    scanf("%d", &N);
    int X[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
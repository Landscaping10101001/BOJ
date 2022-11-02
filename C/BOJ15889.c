#include <stdio.h>

int main(void)
{
    int N;
    int pos[N], range[N - 1];
    
    if(N != 1)
    {
        for(int i = 0; i < N; i++)
        {
            scanf("%d",&pos[i]);
        }

        for(int i = 0; i < N - 1; i++)
        {
            scanf("%d",&range[i]);
        }

        for(int i = 0; i < N - 1; i++)
        {
            if(pos[i + 1] - pos[i] > range[i])
            {
                printf("엄마 나 전역 늦어질 것 같아");
            }

            else
            {
                printf("권병장님, 중대장님이 찾으십니다");
            }
        }
    }

    else
    {
        for(int i = 0; i < N; i++)
        {
            scanf("%d",&pos[i]);
        }

        printf("권병장님, 중대장님이 찾으십니다");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int N , M;
    int i = 1;
    scanf("%d",&N);
    M = (N % 10 * 10) + ((N / 10 + N % 10) % 10);
    while(N =! M)
    {
        M = (M % 10 * 10) + ((M / 10 + M % 10) % 10);
        i++;
    }
    printf("%d",i);
    //printf("%d",(N % 10 * 10) + ((N / 10 + N % 10) % 10)); //계산 확인용 코드
    return 0;
}
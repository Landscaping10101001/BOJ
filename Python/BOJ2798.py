N , M = map(int,input().split())
card = list(map(int,input().split()))
sum = 0
sum_list = []

for i in range(N):

    for j in range(i + 1,N):

        for k in range(j + 1,N):

            sum = card[i] + card[j] + card[k]
            blackjack = M - sum
            if blackjack >= 0:
                sum_list.append(sum)

print(max(sum_list))
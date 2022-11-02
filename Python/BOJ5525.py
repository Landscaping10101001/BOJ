N = int(input())
M = int(input())
S = input()
pattern = []

for i in range(N * 2 + 1):

    if i % 2 == 0:
        pattern.append("I")

    else:
        pattern.append("O")

Pn_num = 0

for i in range(M - len(pattern)):
    pattern_matching = 0

    for j in range(len(pattern)):

        if S[i + j] == pattern[j]:
            pattern_matching += 1

    if pattern_matching == len(pattern):
        Pn_num += 1

print(Pn_num)
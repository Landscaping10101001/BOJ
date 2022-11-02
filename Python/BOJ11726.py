n = int(input())
save = [0,1,2]

for i in range(3, n + 1):
    save.append(save[i - 1] + save[i - 2])

print(save[n] % 10007)
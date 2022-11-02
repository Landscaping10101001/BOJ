S = input()
list_S = []

for i in range(len(S)):
    list_S.append(S[i:])

list_S.sort()
for i in list_S:
    print(i)
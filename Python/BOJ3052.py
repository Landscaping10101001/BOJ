B = []

for i in range(10):
    A = int(input())
    C = A % 42
    B.append(C)
D = list(set(B))

print(len(D))
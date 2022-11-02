n = int(input())
a = [0,1]
for i in range(n - 1):
    b = a[i] + a[i + 1]
    a.append(b)
print(a[n])
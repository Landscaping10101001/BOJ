b = input()
a = []

for i in range (len(b)):
    a.append(b[i])

for i in range(len(a)):
    if(a[i] == 'A' or a[i] =='B' or a[i] =='C'):
        a[i] = 3
    elif(a[i] == 'D' or a[i] =='E' or a[i] =='F'):
        a[i] = 4
    elif (a[i] == 'G' or a[i] =='H' or a[i] =='I'):
        a[i] = 5
    elif(a[i] == 'J' or a[i] =='K' or a[i] =='L'):
        a[i] = 6
    elif(a[i] == 'M' or a[i] =='N' or a[i] =='O'):
        a[i] = 7
    elif(a[i] == 'P' or a[i] =='Q' or a[i] =='R' or a[i] =='S'):
        a[i] = 8
    elif(a[i] == 'T' or a[i] =='U' or a[i] =='V'):
        a[i] = 9
    elif(a[i] == 'W' or a[i] =='X' or a[i] =='Y' or a[i] =='Z'):
        a[i] = 10

t=0

for i in range (len(b)):
    t += a[i]

print(t)
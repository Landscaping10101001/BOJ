a = int(input())

if (a/4 != a//4 and a/100 != a//100):
    print("1")
elif(a//400 == a/400):
    print("1")
else:
    print("0")
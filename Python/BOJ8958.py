test_case = int(input())

for i in range(test_case):
    OX = input()
    sum = 0
    num = 1

    for j in OX:

        if j == "O":
            sum += num
            num += 1

        else:
            num = 1

    print(sum)
while True:
    palindrome_num = input()

    if palindrome_num == "0":
        break

    palindrome_num_length = len(palindrome_num)
    sum = 0

    for i in range(palindrome_num_length // 2):
        if palindrome_num[i] == palindrome_num[palindrome_num_length - 1 - i]:
            sum += 1
            continue
        else:
            print("no")
            break

    if sum == palindrome_num_length // 2:
        print("yes")
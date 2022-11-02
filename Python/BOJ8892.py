Testcase = int(input())

for i in range(Testcase):
    Word_number = int(input())
    word = []

    for j in range(Word_number):
        word.append(input())

    palindrome_word = 0

    for j in range(Word_number):

        for k in range(j + 1,Word_number):
            combined_word_1 = word[j] + word[k]
            reversed_word_1 = combined_word_1[::-1]
            combined_word_2 = word[k] + word[j]
            reversed_word_2 = combined_word_2[::-1]

            if combined_word_1 == reversed_word_1:
                palindrome_word = combined_word_1
                print(palindrome_word)
                break
            
            elif combined_word_2 == reversed_word_2:
                palindrome_word = combined_word_2
                print(palindrome_word)
                break
            
            else:
                continue
        
        if palindrome_word != 0:
            break
    
    if palindrome_word == 0:
        print("0")
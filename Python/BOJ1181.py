import sys

word_num = int(sys.stdin.readline())
words = []

for i in range(word_num):
    word = sys.stdin.readline().rstrip()
    words.append(word)

reduced_words = set(words)
sorted_words = sorted(reduced_words)
sorted_words.sort(key=len)

for i in sorted_words:
    print(i)
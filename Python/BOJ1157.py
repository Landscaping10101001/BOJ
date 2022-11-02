word = input().lower()
new_word = list(set(word))
data = []

for i in new_word:
    count = word.count(i)
    data.append(count)

if data.count(max(data)) >= 2:
    print("?")
else:
    print(new_word[(data.index(max(data)))].upper())
import sys

string = list(input()) #문자열
pattern = list(input()) #패턴
string_length = len(string)
pattern_length = len(pattern)
num_string = [] #문자열 숫자 변환 저장 공간
num_pattern = [] #패턴 숫자 변환 저장 공간
pattern_hash = 0 
string_hash = [] #문자열의 패턴길이 만큼의 해쉬값의 합 저장 공간
x = 26
mod = 997
a = None

if string_length < pattern_length:
    print("0")
    sys.exit()

for i in string: #문자열을 숫자로 변환
    num_string.append(ord(i))

for i in pattern: #패턴을 숫자로 변환
    num_pattern.append(ord(i))

for i in range(pattern_length): #패턴의 해쉬값의 합
    pattern_hash += num_pattern[i] * (x ** (pattern_length - 1 - i))

pattern_hash %= mod
sum = 0 #문자열의 초기 해쉬값의 합
for i in range(pattern_length): #문자열의 초기 해쉬값의 합 구하는 반복문
    sum += num_string[i] * (x ** (pattern_length - 1 - i))

string_hash.append(sum % mod)

for i in range(string_length - pattern_length):
    sum = sum - num_string[i] * (x ** (pattern_length - 1))
    sum = sum * x
    sum = sum + num_string[i + pattern_length]
    string_hash.append(sum % mod)

for i in string_hash:
    if i == pattern_hash:
        print("1")
        a = True
        break

    else:
        continue

if a != True:
    print("0")
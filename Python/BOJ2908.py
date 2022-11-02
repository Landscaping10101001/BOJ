num1 , num2 = map(int,input().split())
a = []

num1_100 = num1 // 100 #백의 자리
num1_10 = num1 % 100 // 10 #십의 자리
num1_1 = num1 % 100 % 10 #일의 자리
reverse_num1 = num1_1 * 100 + num1_10 * 10 + num1_100

num2_100 = num2 // 100 #백의 자리
num2_10 = num2 % 100 // 10 #십의 자리
num2_1 = num2 % 100 % 10 #일의 자리
reverse_num2 = num2_1 * 100 + num2_10 * 10 + num2_100

a.append(reverse_num1)
a.append(reverse_num2)
print(max(a))
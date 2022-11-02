room_number = int(input())

tunnel = 1
num = 1

while True:

    if room_number > num:
        num +=  tunnel * 6
        tunnel += 1
    
    else:
        break
    
print(tunnel)
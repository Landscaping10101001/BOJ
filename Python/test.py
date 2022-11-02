x_speed = float(input("What is the ball x_speed? "))

y_speed = float(input("What is the ball y_speed? "))

width = float(input("What is the width of the lane? "))

length = float(input("What is the length of the lane? "))

radius = float(input("What is the radius of the ball? "))

Sy = float
Sx = float
Sx = width / 2 - radius #처음 튕길 때의 x좌표
time = float
time = Sx / abs(x_speed) #처음 튕기기까지의 시간
Sy = time * y_speed #처음 튕길 때의 y좌표
bounce_time = int #처음을 제외한 튕기는 횟수
bounce_time = int((length - Sy) / (Sy * 2))

if(x_speed > 0): #처음 튕기는 좌표 출력
    print("x: ", Sx, "m", ", ", "y: ", Sy, "m", sep = '')
else:
    Sx *= -1
    print("x: ", Sx, "m", ", ", "y: ", Sy, "m", sep = '')

while bounce_time:
    if(x_speed > 0):
        print("x:", Sx, "m", ", ", "y: ", Sy)
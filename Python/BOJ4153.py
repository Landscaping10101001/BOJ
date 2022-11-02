while(True):

    side1 , side2 , side3 = map(int,input().split())

    if side1 == 0 and side2 == 0 and side3 == 0:
        break

    if side1 - side2 > 0 and side1 - side3 > 0:

        if side1**2 - side2**2 - side3**2 == 0:
            print("right")

        else:
            print("wrong")

    elif side2 - side1 > 0 and side2 - side3 > 0:

        if side2**2 - side1**2 - side3**2 == 0:
            print("right")

        else:
            print("wrong")

    else:

        if side3**2 - side2**2 - side1**2 == 0:
            print("right")
            
        else:
            print("wrong")
# 0 변수 선언
money = 0
coffee = 10
milk = 10

# 1 함수 제작

# 동전 투입 함수
def moneyinput(money):
    money += int(input("돈을 입력해주세요.: "))
    return money

# 동전 반환 함수
def moneyreturn(money):
    print("{}원이 반환되었습니다. ".format(money))
    money -= money
    return money

# 메뉴 선택 함수
def menu(coffee,milk,money):
    while True:
        menu = input("메뉴를 선택해주세요. \n")
        if menu == '커피' or menu == '우유':
            break
        else:
            print("그런 메뉴는 없습니다.\n 다시 입력해주세요.\n")
        
    if  menu == '커피':
        if coffee > 0 and money >= 2000:
            print("커피 나왔습니다.\n")
            coffee -= 1
            money -= 2000

        elif coffee <= 0:
            print("재고가 없습니다.\n")

        elif money < 2000:
            print("돈이 부족합니다.\n")

    elif menu == '우유':
        if milk > 0 and money >= 1000:
            print("우유 나왔습니다.\n")
            milk -= 1
            money -= 1000

        elif milk <= 0:
            print("재고가 없습니다.\n")

        elif money < 1000:
            print("돈이 부족합니다.\n")

# 자판기 실행
while True:
    print("현재 금액: {}".format(money))
    print("현재 재고: 커피 - {}개 , 우유 - {}개".format(coffee,milk))
    print("1.동전 투입\n2.반환 및 종료\n3.메뉴 선택\n4.재고 보충\n")
    select = int(input("선택: "))
    if select == 1:
        moneyinput(money)

    elif select == 2:
        moneyreturn(money)

    elif select == 3:
        menu(coffee,milk,money)

    else:
        print("잘못 입력하셨습니다\n")
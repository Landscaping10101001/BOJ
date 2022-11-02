N = int(input()) #문장 개수입력

for i in range(N):
    sentence = input().lower() #문장 입력받는 동시에 소문자로 변경한다
    missing_list = [] #문장에 나타나지 않은 알파벳을 저장할 리스트
    alphabet_num = 0 #문장 속 알파벳의 개수

    for j in range(97,123): #97은 소문자 a의 아스키 코드 123은 소문자 z의 아스키 코드 보다 1크다
        if chr(j) in sentence: #알파벳이 문장안에 있다면 1을 증가시킨다
            alphabet_num += 1
        else: #알파벳이 문장 안에 없다면 missing_list안에 넣어준다.
            missing_list.append(chr(j))
    
    if alphabet_num == 26: #알파벳은 총 26개로 문장이 팬그램에 해당하면 alphabet_num은 26이므로 팬그램에 해당한다.
        print("pangram")
    
    else:
        print("missing",end =" ")
        print(*missing_list,sep="")
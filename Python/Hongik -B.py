import copy

dance_party = []

#입력
for column in range(5):

    a = input()
    data = []

    for i in a:

        data.append(i)
    
    dance_party.append(data)

#열 교환
new_dance_party = copy.deepcopy(dance_party)

for i in range(5):

    new_dance_party[i][0] = dance_party[i][1]
    new_dance_party[i][1] = dance_party[i][0]

#출력
for i  in new_dance_party:

    for j in i:

        print(j,end = " ")
    
    print("\n")
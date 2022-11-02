import sys

S = list(sys.stdin.readline().rstrip())

if "A" in S:
    for i in range(len(S)):
        if S[i] == "B" or S[i] == "C" or S[i] == "D" or S[i] == "F":
            S[i] = "A"

else:
    if "B" in S:
        for j in range(len(S)):
            if S[j] == "C" or S[j] == "D" or S[j] == "F":
                S[j] = "B"
    
    else:
        if "C" in S:
            for k in range(len(S)):
                if S[k] == "D" or S[k] == "F":
                    S[k] = "C"
        
        else:
            for l in range(len(S)):
                S[l] = "A"

for i in range(len(S)):
    print(S[i], end = "")
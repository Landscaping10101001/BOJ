x , y , w , h = map(int,input().split())
data = []
data.append(x - 0)
data.append(w - x)
data.append(y - 0)
data.append(h - y)
print(min(data))
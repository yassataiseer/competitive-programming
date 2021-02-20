def solve(data):
    wins = 0
    for i in data:
        if i=="W":
            wins+=1
        else:
            pass
    if wins == 0:
        return -1
    elif wins >= 5:
        return 1
    elif wins >=3:
        return 2
    else:
        return 3


data = []
a = input()
b = input()
c = input()
d = input()
e = input()
f = input()
data.append(a)
data.append(b)
data.append(c)
data.append(d)
data.append(e)
data.append(f)
print(solve(data))
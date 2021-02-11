def solve(object):
    for i in object:
        x,y = i.split(" ")
        print(int(x)*y)


cases = int(input())
data = []
for j in range(cases):
    x = input()
    data.append(x)
solve(data)
def solve(data):
    data = sorted(data)
    return data

data = []
amount = int(input())
for i in range(amount):
    x = int(input())
    data.append(x)
answer = solve(data)
for stuff in answer:
    print(stuff)

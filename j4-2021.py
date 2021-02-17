def solve(data):
    amount = 0
    if sorted(data)==data:
        return 0
    while sorted(data) != data:
        for numbers in data:
            if data[numbers]<data[numbers-1]:
                data[numbers],data[numbers-1] = data[numbers-1],data[numbers]
                amount +=1
            else:
                pass
    return amount

data = []
sorter = input()
for i in sorter:
    if i == "L":
        data.append(1)
    elif i == "M":
        data.append(2)
    else:
        data.append(3)
print(solve(data))
def solve(names,bids):
    highest = 0
    Name = ""
    for i in range(len(names)):
        if bids[i]>highest:
            x = bids[i]
            highest = 0
            highest += x
            Name = names[i]
    return Name

names = []
bids = []
people = int(input())

for i in range(people):
    name = input()
    bid = int(input())
    names.append(name)
    bids.append(bid)
print(solve(names,bids))
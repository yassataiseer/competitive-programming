def solve(names,bids):
    max_amount = max(bids)
    index_location = bids.index(max_amount)
    return names[index_location]

names = []
bids = []
people = int(input())
if people>100:
    exit()
for i in range(people):
    name = input()
    bid = input()
    if int(bid)>=2000 or abs(int(bid))!=int(bid):
        pass
    else:
        names.append(name)
        bids.append(bid)
print(solve(names,bids))
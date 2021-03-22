#COCI '18 Contest 1 #1 Nadan
def solve(money,people):
    prev_amount = 0
    numbers = []
    for i in range(people):
        if i+1 == people:
            numbers.append(money)
        else:
            prev_amount += 1
            money -= 1
            numbers.append(prev_amount)
    return numbers



money = int(input())
people = int(input())

print(solve(money,people))
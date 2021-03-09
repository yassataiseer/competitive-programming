def solve(scores):
    A_count = 100
    D_count = 100
    for stuff in scores:
        if stuff[0] > stuff[1]:
            D_count -= stuff[0]
        elif stuff[0] < stuff[1]:
            A_count -= stuff[1]
        else:
            pass
    print(A_count)
    print(D_count)

amount = int(input())
data = []
for i in range(amount):
    plays = input()
    plays = plays.split(" ")
    plays = list(map(int, plays))
    data.append(plays)

solve(data)
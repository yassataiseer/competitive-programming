def solve(team1,team2):
    answer = 0
    if sum(team1) ==sum (team2):
        answer = len(team1)
        return answer
    for i in range(len(team1)):
        i+=1
        if sum(team1[0:i])==sum(team2[0:i]):
            answer = i

    return answer
x = int(input())
team1 = input()
team2 = input()
team1 = team1.split(" ")
team2 = team2.split(" ")
team1 = list(map(int,team1))
team2 = list(map(int,team2))
print(solve(team1,team2))





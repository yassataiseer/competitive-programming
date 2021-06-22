def solve(team1,team2):
    answer = [0]
    sumSwifts = 0 
    sumSem =  0 
    if sum(team1)==sum (team2):
        return len(team1)
    for i in range(len(team1)):
        sumSwifts += int(team1[i])
        sumSem += int(team2[i])
        if sumSwifts == sumSem:
            answer.append(i + 1)
    return max(answer)

x = int(input())
team1 = input()
team2 = input()
team1 = team1.split(" ")
team2 = team2.split(" ")
team1 = list(map(int,team1))
team2 = list(map(int,team2))
print(solve(team1,team2))





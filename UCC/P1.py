def solve(day1,day2):
    counter = 0
    for i in range(len(day1)):
        if day1[i]=="0"and day2[i]=="0":
            counter+=1
    return counter
x = int(input())
day1 = input()
day2 = input()
print(solve(day1,day2))


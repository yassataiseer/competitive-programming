#Mock CCC '20 Contest 2 S1 - Arithmetic Hybercube
def solve(line):
    answer = ""
    line = list(map(int, line)) 
    line = sorted(line)
    for i in range(len(line)):
        answer+= str(line[i])
        answer += " "
    answer =answer.lstrip()
    print(answer)


x = int(input())
y = input()
y = y.split(" ")
solve(y)




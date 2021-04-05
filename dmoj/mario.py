def solve(data):
    answers = []
    level = data.split("-")
    if int(level[0])>4:
        value = simple_solve(level)
        answers.append(value)
    elif int(level[0])==4 and int(level[1])>2:
        value = rough_solve(level)
        answers.append(value)
    else:
        value = rough_solve(level)
        answers.append(value)
    return answers
def simple_solve(data):
    answer = 0
    answer += 4 - int(data[-1]) +1
    answer += (8 - int(data[0]))*4
    return answer
def rough_solve(data):
    answer = 0
    while True:
        if int(data[0])==1 and int(data[1])==2:
            answer+=8
            break
        elif int(data[0])==4 and int(data[1])==2:
            answer+=5
            break
        else:
            data[1] = str(int(data[1])+1)
            if int(data[1])>4:
                data[1] = "1"
                data[0] = str(int(data[0])+1)
    return answer

#print(solve("6-1"))
#x  ="6-1"
#x = x.split("-")
#print(int(x[0]))
data = []
amount = int(input())
for i in range(amount):
    x = input()
    data.append(x)
for stuff in data:
    print(solve(stuff)[0])

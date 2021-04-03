def solve(data):
    answers = []
    for level in data:
        level = level.split("-")
        if level[0]>4:
            value = simple_solve(data)
            answer.append(value)

    return answers
def simple_solve(data):
    answer = 0
    answer += 4 - int(data[-1]) +1
    answer += (8 - int(data[0]))*4
    return answer

#print(simple_solve(["6","1"]))
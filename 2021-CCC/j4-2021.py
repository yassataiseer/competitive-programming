def solve(query):
    answer = 0
    table = {"L":3,"M":2,"S":1}
    data = []
    for letters in query:
        data.append(table[letters])
    sorted_data = sorted(data)
    sorted_data = sorted_data[::-1] 
    for i in range(len(data)):
        if sorted_data[i]!=data[i]:
            answer+=1
    return answer-1
x = input()
answer = solve(x)

if answer<0:
    print(0)
else:
    print(answer)




















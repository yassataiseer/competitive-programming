def solve(rows,column):
    breaker = rows* column
    graph = []
    for i in range(rows):
        data = input()
        data = data.split(" ")
        graph.append(data)
    first_coordinate = graph[0][0]
    last_coordinate = graph[-1][-1]
    if int(last_coordinate)%int(first_coordinate) ==0 or int(first_coordinate)%int(last_coordinate) ==0:
        return "yes"
    else:
        print("no")






rows = int(input())
column = int(input())

print(solve(rows,column))
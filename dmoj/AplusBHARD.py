def solve(data):
    for equation in data:
        print(int(equation[0])+int(equation[1]))
    
data = []
cases = int(input())
for i in range(cases):
    user = input()
    user = user.split(" ")
    data.append(user)
solve(data)


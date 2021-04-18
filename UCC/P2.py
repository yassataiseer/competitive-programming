def solve(routes):
    final_answer = []
    counter = 0
    for options in routes:
        final_answer.append(sum(options))
    return min(final_answer)
routes = []
directions = int(input())
for i in range(directions):
    route = input()
    route = route.split(" ")
    route = list(map(int,route))
    route.pop(0)
    routes.append(route)
print(solve(routes))
